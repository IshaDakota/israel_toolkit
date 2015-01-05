<?php
/**
 * @file
 * toolkit_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function toolkit_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'curriculum_content_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Curriculum Content Landing Page';
  $page->admin_description = 'A landing page for the curriculum content sention of the Toolkit.';
  $page->path = 'curriculum-content';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_curriculum_content_landing_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'curriculum_content_landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'landing';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Content & Programs';
  $display->uuid = 'bb78ea7a-94c8-4cd0-9815-e2d501c62d79';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e3a9c87f-9176-49a8-8199-785780a4a053';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'curriculum_content-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e3a9c87f-9176-49a8-8199-785780a4a053';
    $display->content['new-e3a9c87f-9176-49a8-8199-785780a4a053'] = $pane;
    $display->panels['contentmain'][0] = 'new-e3a9c87f-9176-49a8-8199-785780a4a053';
    $pane = new stdClass();
    $pane->pid = 'new-c11bf305-efe4-4c71-9d20-a747100ae611';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c11bf305-efe4-4c71-9d20-a747100ae611';
    $display->content['new-c11bf305-efe4-4c71-9d20-a747100ae611'] = $pane;
    $display->panels['sidebar'][0] = 'new-c11bf305-efe4-4c71-9d20-a747100ae611';
    $pane = new stdClass();
    $pane->pid = 'new-1e8e4064-b1b4-4794-a8fc-1c693051e46a';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'views-7dbace8b84e260492dba75b295050d1b';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1e8e4064-b1b4-4794-a8fc-1c693051e46a';
    $display->content['new-1e8e4064-b1b4-4794-a8fc-1c693051e46a'] = $pane;
    $display->panels['sidebar'][1] = 'new-1e8e4064-b1b4-4794-a8fc-1c693051e46a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['curriculum_content_landing_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_homepage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'front',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'homepage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'jumbotron' => NULL,
      'window1' => NULL,
      'window2' => NULL,
      'window3' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '<none>';
  $display->uuid = '8616ab94-942a-423b-84d9-fcc40b797c0d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-318098c6-47fe-4d01-a44e-652aef3e8791';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'page_element-panel_page_element';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_page_value' => 'homepage',
        'field_location_value' => 'contentmain',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '318098c6-47fe-4d01-a44e-652aef3e8791';
    $display->content['new-318098c6-47fe-4d01-a44e-652aef3e8791'] = $pane;
    $display->panels['contentmain'][0] = 'new-318098c6-47fe-4d01-a44e-652aef3e8791';
    $pane = new stdClass();
    $pane->pid = 'new-dfd72207-26ea-4765-a27e-44e935b789bc';
    $pane->panel = 'jumbotron';
    $pane->type = 'views_panes';
    $pane->subtype = 'page_element-panel_page_element';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_page_value' => 'homepage',
        'field_location_value' => 'jumbotron',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dfd72207-26ea-4765-a27e-44e935b789bc';
    $display->content['new-dfd72207-26ea-4765-a27e-44e935b789bc'] = $pane;
    $display->panels['jumbotron'][0] = 'new-dfd72207-26ea-4765-a27e-44e935b789bc';
    $pane = new stdClass();
    $pane->pid = 'new-7dccb1ba-935a-4315-bbc7-78d29fc36156';
    $pane->panel = 'window1';
    $pane->type = 'views_panes';
    $pane->subtype = 'page_element-panel_page_element';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_page_value' => 'homepage',
        'field_location_value' => 'window1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7dccb1ba-935a-4315-bbc7-78d29fc36156';
    $display->content['new-7dccb1ba-935a-4315-bbc7-78d29fc36156'] = $pane;
    $display->panels['window1'][0] = 'new-7dccb1ba-935a-4315-bbc7-78d29fc36156';
    $pane = new stdClass();
    $pane->pid = 'new-ddf88620-e4e9-4ee8-989d-d004c0318275';
    $pane->panel = 'window2';
    $pane->type = 'views_panes';
    $pane->subtype = 'page_element-panel_page_element';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_page_value' => 'homepage',
        'field_location_value' => 'window2',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ddf88620-e4e9-4ee8-989d-d004c0318275';
    $display->content['new-ddf88620-e4e9-4ee8-989d-d004c0318275'] = $pane;
    $display->panels['window2'][0] = 'new-ddf88620-e4e9-4ee8-989d-d004c0318275';
    $pane = new stdClass();
    $pane->pid = 'new-d3087d2c-98df-4dfb-908d-3c089f9e0163';
    $pane->panel = 'window3';
    $pane->type = 'views_panes';
    $pane->subtype = 'page_element-panel_page_element';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_page_value' => 'homepage',
        'field_location_value' => 'window3',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd3087d2c-98df-4dfb-908d-3c089f9e0163';
    $display->content['new-d3087d2c-98df-4dfb-908d-3c089f9e0163'] = $pane;
    $display->panels['window3'][0] = 'new-d3087d2c-98df-4dfb-908d-3c089f9e0163';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['homepage'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'questions_concepts_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Questions Concepts Landing Page';
  $page->admin_description = 'A landing page for the curriculum content sention of the Toolkit.';
  $page->path = 'questions-concepts';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_questions_concepts_landing_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'questions_concepts_landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'landing';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Questions & Concepts';
  $display->uuid = 'bb78ea7a-94c8-4cd0-9815-e2d501c62d79';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-442fad97-e890-49be-8c74-a233a1adf510';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'questions_concepts-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '442fad97-e890-49be-8c74-a233a1adf510';
    $display->content['new-442fad97-e890-49be-8c74-a233a1adf510'] = $pane;
    $display->panels['contentmain'][0] = 'new-442fad97-e890-49be-8c74-a233a1adf510';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['questions_concepts_landing_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'resource_library_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Resource Library Landing Page';
  $page->admin_description = 'A landing page for the curriculum content sention of the Toolkit.';
  $page->path = 'resource-library';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_resource_library_landing_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'resource_library_landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'landing';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Resource Library';
  $display->uuid = 'bb78ea7a-94c8-4cd0-9815-e2d501c62d79';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d91c4724-cbf4-4dea-9aa3-e9e98d141baa';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'resource_library-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd91c4724-cbf4-4dea-9aa3-e9e98d141baa';
    $display->content['new-d91c4724-cbf4-4dea-9aa3-e9e98d141baa'] = $pane;
    $display->panels['contentmain'][0] = 'new-d91c4724-cbf4-4dea-9aa3-e9e98d141baa';
    $pane = new stdClass();
    $pane->pid = 'new-fbe219e0-cfdc-4452-9194-499c2d3a2024';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'views-d708093bb3437f5d42dde828ef4f3c3a';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fbe219e0-cfdc-4452-9194-499c2d3a2024';
    $display->content['new-fbe219e0-cfdc-4452-9194-499c2d3a2024'] = $pane;
    $display->panels['sidebar'][0] = 'new-fbe219e0-cfdc-4452-9194-499c2d3a2024';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['resource_library_landing_page'] = $page;

  return $pages;

}
