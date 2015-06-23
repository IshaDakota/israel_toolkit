<?php
/**
 * @file
 * toolkit_content_slider.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function toolkit_content_slider_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'toolkit_sliders';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Toolkit Sliders';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'How Do I Use The Toolkit?';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_carousel_plugin_style';
  $handler->display->display_options['style_options']['interval'] = 'false';
  $handler->display->display_options['style_options']['navigation'] = 1;
  $handler->display->display_options['style_options']['indicators'] = 1;
  $handler->display->display_options['style_options']['pause'] = 0;
  $handler->display->display_options['row_plugin'] = 'views_bootstrap_carousel_plugin_rows';
  $handler->display->display_options['row_options']['image'] = 'field_slider_image';
  $handler->display->display_options['row_options']['title'] = 'title';
  $handler->display->display_options['row_options']['description'] = 'body';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Slider Image */
  $handler->display->display_options['fields']['field_slider_image']['id'] = 'field_slider_image';
  $handler->display->display_options['fields']['field_slider_image']['table'] = 'field_data_field_slider_image';
  $handler->display->display_options['fields']['field_slider_image']['field'] = 'field_slider_image';
  $handler->display->display_options['fields']['field_slider_image']['label'] = '';
  $handler->display->display_options['fields']['field_slider_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slider_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slider_image']['settings'] = array(
    'image_style' => 'slider_image',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slider_element' => 'slider_element',
  );
  /* Filter criterion: Content: Slider Tag (field_slider_tag) */
  $handler->display->display_options['filters']['field_slider_tag_tid']['id'] = 'field_slider_tag_tid';
  $handler->display->display_options['filters']['field_slider_tag_tid']['table'] = 'field_data_field_slider_tag';
  $handler->display->display_options['filters']['field_slider_tag_tid']['field'] = 'field_slider_tag_tid';
  $handler->display->display_options['filters']['field_slider_tag_tid']['value'] = array(
    0 => '74',
  );
  $handler->display->display_options['filters']['field_slider_tag_tid']['vocabulary'] = 'slider';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $translatables['toolkit_sliders'] = array(
    t('Master'),
    t('How Do I Use The Toolkit?'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content pane'),
    t('View panes'),
  );
  $export['toolkit_sliders'] = $view;

  return $export;
}
