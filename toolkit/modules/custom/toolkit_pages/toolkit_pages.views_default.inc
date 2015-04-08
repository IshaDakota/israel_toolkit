<?php
/**
 * @file
 * toolkit_pages.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function toolkit_pages_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'curriculum_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Curriculum Content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Header Image */
  $handler->display->display_options['fields']['field_header_image']['id'] = 'field_header_image';
  $handler->display->display_options['fields']['field_header_image']['table'] = 'field_data_field_header_image';
  $handler->display->display_options['fields']['field_header_image']['field'] = 'field_header_image';
  $handler->display->display_options['fields']['field_header_image']['label'] = '';
  $handler->display->display_options['fields']['field_header_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_header_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_header_image']['settings'] = array(
    'image_style' => 'content_list_image',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Introduction */
  $handler->display->display_options['fields']['field_introduction']['id'] = 'field_introduction';
  $handler->display->display_options['fields']['field_introduction']['table'] = 'field_data_field_introduction';
  $handler->display->display_options['fields']['field_introduction']['field'] = 'field_introduction';
  $handler->display->display_options['fields']['field_introduction']['label'] = '';
  $handler->display->display_options['fields']['field_introduction']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_introduction']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_introduction']['settings'] = array(
    'trim_length' => '600',
  );
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
    'curriculum_content' => 'curriculum_content',
  );
  /* Filter criterion: Content: Themes (field_themes) */
  $handler->display->display_options['filters']['field_themes_tid']['id'] = 'field_themes_tid';
  $handler->display->display_options['filters']['field_themes_tid']['table'] = 'field_data_field_themes';
  $handler->display->display_options['filters']['field_themes_tid']['field'] = 'field_themes_tid';
  $handler->display->display_options['filters']['field_themes_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_themes_tid']['expose']['operator_id'] = 'field_themes_tid_op';
  $handler->display->display_options['filters']['field_themes_tid']['expose']['label'] = 'Themes';
  $handler->display->display_options['filters']['field_themes_tid']['expose']['operator'] = 'field_themes_tid_op';
  $handler->display->display_options['filters']['field_themes_tid']['expose']['identifier'] = 'field_themes_tid';
  $handler->display->display_options['filters']['field_themes_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_themes_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_themes_tid']['vocabulary'] = 'themes';
  /* Filter criterion: Content: Values (field_values) */
  $handler->display->display_options['filters']['field_values_tid']['id'] = 'field_values_tid';
  $handler->display->display_options['filters']['field_values_tid']['table'] = 'field_data_field_values';
  $handler->display->display_options['filters']['field_values_tid']['field'] = 'field_values_tid';
  $handler->display->display_options['filters']['field_values_tid']['value'] = '';
  $handler->display->display_options['filters']['field_values_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_values_tid']['expose']['operator_id'] = 'field_values_tid_op';
  $handler->display->display_options['filters']['field_values_tid']['expose']['label'] = 'Values';
  $handler->display->display_options['filters']['field_values_tid']['expose']['operator'] = 'field_values_tid_op';
  $handler->display->display_options['filters']['field_values_tid']['expose']['identifier'] = 'field_values_tid';
  $handler->display->display_options['filters']['field_values_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_values_tid']['vocabulary'] = 'values';

  /* Display: Landing Page pane */
  $handler = $view->new_display('panel_pane', 'Landing Page pane', 'panel_pane_1');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['curriculum_content'] = array(
    t('Master'),
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
    t('Themes'),
    t('Values'),
    t('Landing Page pane'),
    t('View panes'),
  );
  $export['curriculum_content'] = $view;

  $view = new view();
  $view->name = 'questions_concepts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Questions Concepts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
  $handler->display->display_options['style_options']['image_field'] = 'field_header_image';
  $handler->display->display_options['style_options']['heading_field'] = 'title';
  $handler->display->display_options['style_options']['body_field'] = 'field_introduction';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Introduction */
  $handler->display->display_options['fields']['field_introduction']['id'] = 'field_introduction';
  $handler->display->display_options['fields']['field_introduction']['table'] = 'field_data_field_introduction';
  $handler->display->display_options['fields']['field_introduction']['field'] = 'field_introduction';
  $handler->display->display_options['fields']['field_introduction']['label'] = '';
  $handler->display->display_options['fields']['field_introduction']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_introduction']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_introduction']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Header Image */
  $handler->display->display_options['fields']['field_header_image']['id'] = 'field_header_image';
  $handler->display->display_options['fields']['field_header_image']['table'] = 'field_data_field_header_image';
  $handler->display->display_options['fields']['field_header_image']['field'] = 'field_header_image';
  $handler->display->display_options['fields']['field_header_image']['label'] = '';
  $handler->display->display_options['fields']['field_header_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_header_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_header_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
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
    'concept_piece' => 'concept_piece',
  );

  /* Display: Landing Page pane */
  $handler = $view->new_display('panel_pane', 'Landing Page pane', 'panel_pane_1');
  $translatables['questions_concepts'] = array(
    t('Master'),
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
    t('Landing Page pane'),
    t('View panes'),
  );
  $export['questions_concepts'] = $view;

  $view = new view();
  $view->name = 'resource_library';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Resource Library';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
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
    'resource' => 'resource',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Resource Type (field_resource_type) */
  $handler->display->display_options['filters']['field_resource_type_tid']['id'] = 'field_resource_type_tid';
  $handler->display->display_options['filters']['field_resource_type_tid']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['filters']['field_resource_type_tid']['field'] = 'field_resource_type_tid';
  $handler->display->display_options['filters']['field_resource_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_resource_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_resource_type_tid']['expose']['operator_id'] = 'field_resource_type_tid_op';
  $handler->display->display_options['filters']['field_resource_type_tid']['expose']['label'] = 'Resource Type';
  $handler->display->display_options['filters']['field_resource_type_tid']['expose']['operator'] = 'field_resource_type_tid_op';
  $handler->display->display_options['filters']['field_resource_type_tid']['expose']['identifier'] = 'field_resource_type_tid';
  $handler->display->display_options['filters']['field_resource_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_resource_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_resource_type_tid']['vocabulary'] = 'resource_type';
  /* Filter criterion: Content: Resource Source (field_resource_source) */
  $handler->display->display_options['filters']['field_resource_source_tid']['id'] = 'field_resource_source_tid';
  $handler->display->display_options['filters']['field_resource_source_tid']['table'] = 'field_data_field_resource_source';
  $handler->display->display_options['filters']['field_resource_source_tid']['field'] = 'field_resource_source_tid';
  $handler->display->display_options['filters']['field_resource_source_tid']['value'] = '';
  $handler->display->display_options['filters']['field_resource_source_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_resource_source_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_resource_source_tid']['expose']['operator_id'] = 'field_resource_source_tid_op';
  $handler->display->display_options['filters']['field_resource_source_tid']['expose']['label'] = 'Source';
  $handler->display->display_options['filters']['field_resource_source_tid']['expose']['operator'] = 'field_resource_source_tid_op';
  $handler->display->display_options['filters']['field_resource_source_tid']['expose']['identifier'] = 'field_resource_source_tid';
  $handler->display->display_options['filters']['field_resource_source_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_resource_source_tid']['vocabulary'] = 'resource_source';
  /* Filter criterion: Content: Resource Tags (field_resource_tags) */
  $handler->display->display_options['filters']['field_resource_tags_tid']['id'] = 'field_resource_tags_tid';
  $handler->display->display_options['filters']['field_resource_tags_tid']['table'] = 'field_data_field_resource_tags';
  $handler->display->display_options['filters']['field_resource_tags_tid']['field'] = 'field_resource_tags_tid';
  $handler->display->display_options['filters']['field_resource_tags_tid']['value'] = '';
  $handler->display->display_options['filters']['field_resource_tags_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_resource_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_resource_tags_tid']['expose']['operator_id'] = 'field_resource_tags_tid_op';
  $handler->display->display_options['filters']['field_resource_tags_tid']['expose']['label'] = 'Tags';
  $handler->display->display_options['filters']['field_resource_tags_tid']['expose']['operator'] = 'field_resource_tags_tid_op';
  $handler->display->display_options['filters']['field_resource_tags_tid']['expose']['identifier'] = 'field_resource_tags_tid';
  $handler->display->display_options['filters']['field_resource_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_resource_tags_tid']['vocabulary'] = 'resource_tags';

  /* Display: Landing Page pane */
  $handler = $view->new_display('panel_pane', 'Landing Page pane', 'panel_pane_1');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['resource_library'] = array(
    t('Master'),
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
    t('Resource Type'),
    t('Source'),
    t('Tags'),
    t('Landing Page pane'),
    t('View panes'),
  );
  $export['resource_library'] = $view;

  return $export;
}
