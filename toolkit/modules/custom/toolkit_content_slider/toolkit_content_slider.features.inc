<?php
/**
 * @file
 * toolkit_content_slider.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function toolkit_content_slider_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function toolkit_content_slider_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function toolkit_content_slider_node_info() {
  $items = array(
    'slider_element' => array(
      'name' => t('Slider Element'),
      'base' => 'node_content',
      'description' => t('Stand-alone slider content. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
