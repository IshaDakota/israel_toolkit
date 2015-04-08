<?php
/**
 * @file
 * toolkit_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function toolkit_pages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function toolkit_pages_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function toolkit_pages_image_default_styles() {
  $styles = array();

  // Exported image style: content_list_image.
  $styles['content_list_image'] = array(
    'label' => 'Content List Image',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 325,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
