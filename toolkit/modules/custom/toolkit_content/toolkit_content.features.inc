<?php
/**
 * @file
 * toolkit_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function toolkit_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function toolkit_content_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function toolkit_content_image_default_styles() {
  $styles = array();

  // Exported image style: curriculum_sidebar.
  $styles['curriculum_sidebar'] = array(
    'label' => 'Curriculum Sidebar',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function toolkit_content_node_info() {
  $items = array(
    'concept_piece' => array(
      'name' => t('Concept Piece'),
      'base' => 'node_content',
      'description' => t('A conceptual "thought piece" for the Conflict Toolkit.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'curriculum_content' => array(
      'name' => t('Curriculum Content'),
      'base' => 'node_content',
      'description' => t('The basic content type for the Conflict Toolkit.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'discussion_guide' => array(
      'name' => t('Discussion Guide'),
      'base' => 'node_content',
      'description' => t('A discussion guide for the Conflict Toolkit.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'resource' => array(
      'name' => t('Resource'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
