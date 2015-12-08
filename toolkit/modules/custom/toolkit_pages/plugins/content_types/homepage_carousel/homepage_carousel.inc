<?php

/**
 * Plugin definition.
 */
$plugin = array(
  'title' => t('Homepage Carousel'),
  'description' => t('Renders carousel of featured Initiatives.'),
  'category' => t('toolkit'),
  'hook theme' => 'toolkit_homepage_carousel_theme',
  'render callback' => 'toolkit_homepage_carousel_render',
);

/**
 * Render callback.
 */
function toolkit_homepage_carousel_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $block->content = '';

  $range = empty($conf['range']) ? 10 : $conf['range'];

  // Find initiatives with field_featured_initiative set to true.
  $query = new EntityFieldQuery();
  $result = $query
    ->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'curriculum_content')
    //->fieldCondition('field_featured_initiative', 'value', TRUE)
    ->propertyCondition('status', NODE_PUBLISHED)
    ->propertyOrderBy('nid', 'DESC')
    ->range(0, $range)
    ->execute();

  if (empty($result['node'])) {
    return $block;
  }

  // Load the initiatives nodes.
  $nodes = node_load_multiple(array_keys($result['node']));

  $items = array();
  foreach ($nodes as $node) {
    $wrapper = entity_metadata_wrapper('node', $node);
    $body = $wrapper->body->value() ? truncate_utf8($wrapper->body->value->value(), 400, TRUE, TRUE) : '';
    // If body was truncated (and ellipsis were placed at the end), we need to add a closing '</p>' at the end.
    $body = preg_replace('/[.]{3}$/', '...</p>', $body);
    $image = $wrapper->field_header_image->value();
    // Add item.
    $image_style = array(
      'style_name' => 'slider_image',
      'path' => $image['uri'],
    );
    $items[] = array(
      'title' => check_plain($wrapper->label()),
      'body' => $body,
      'link' => drupal_get_path_alias('node/' . $wrapper->getIdentifier()),
      'image_url' => $image['uri'] ? theme('image_style', $image_style) : '',
    );
  }
  $block->content = theme('homepage_carousel', array('initiatives' => $items));

  return $block;
}


/**
 * Edit form.
 *
 * Add layout type select field in order to define the page layout.
 */
function toolkit_homepage_carousel_content_type_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['toolkit_homepage_carousel'] = array(
    '#type' => 'textfield',
    '#default_value' => empty($conf['range']) ? 10 : $conf['range'],
    '#title' => t('Carousel Range'),
    '#description' => t('Amount of nodes to display.'),
  );

  return $form;
}

/**
 * Edit form submit callback.
 */
function toolkit_homepage_carousel_content_type_edit_form_submit($form, &$form_state) {
  $form_state['conf']['range'] = $form_state['values']['range'];
}


/**
 * Delegated hook_theme().
 */
function toolkit_homepage_carousel_theme(&$theme, $plugin) {
  $theme['homepage_carousel'] = array(
    'template' => 'homepage_carousel',
    'path' => $plugin['path'],
    'variables' => array(),
  );
}
