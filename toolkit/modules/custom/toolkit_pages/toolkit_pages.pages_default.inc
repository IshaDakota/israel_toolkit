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
    'body_classes_to_add' => 'landing',
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
      'title' => NULL,
      'subtitle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Programs & Activities';
  $display->uuid = 'bb78ea7a-94c8-4cd0-9815-e2d501c62d79';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8b196335-e85f-424a-bbb8-5009dc0bdb85';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'curriculum_content-panel_pane_2';
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
    $pane->uuid = '8b196335-e85f-424a-bbb8-5009dc0bdb85';
    $display->content['new-8b196335-e85f-424a-bbb8-5009dc0bdb85'] = $pane;
    $display->panels['contentmain'][0] = 'new-8b196335-e85f-424a-bbb8-5009dc0bdb85';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e3a9c87f-9176-49a8-8199-785780a4a053';
    $display->content['new-e3a9c87f-9176-49a8-8199-785780a4a053'] = $pane;
    $display->panels['contentmain'][1] = 'new-e3a9c87f-9176-49a8-8199-785780a4a053';
    $pane = new stdClass();
    $pane->pid = 'new-c11bf305-efe4-4c71-9d20-a747100ae611';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'Themes',
      'override_title_heading' => 'h2',
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
    $pane->pid = 'new-48761670-73cc-4376-bdc4-7c7145c710b5';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'taxonomy_sidebar-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '48761670-73cc-4376-bdc4-7c7145c710b5';
    $display->content['new-48761670-73cc-4376-bdc4-7c7145c710b5'] = $pane;
    $display->panels['sidebar'][1] = 'new-48761670-73cc-4376-bdc4-7c7145c710b5';
    $pane = new stdClass();
    $pane->pid = 'new-600dcf60-077c-442c-941e-83866e7de792';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'taxonomy_sidebar-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '600dcf60-077c-442c-941e-83866e7de792';
    $display->content['new-600dcf60-077c-442c-941e-83866e7de792'] = $pane;
    $display->panels['sidebar'][2] = 'new-600dcf60-077c-442c-941e-83866e7de792';
    $pane = new stdClass();
    $pane->pid = 'new-6c73f5e9-439b-43d8-8032-72084b5be1e5';
    $pane->panel = 'title';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6c73f5e9-439b-43d8-8032-72084b5be1e5';
    $display->content['new-6c73f5e9-439b-43d8-8032-72084b5be1e5'] = $pane;
    $display->panels['title'][0] = 'new-6c73f5e9-439b-43d8-8032-72084b5be1e5';
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
      'description' => NULL,
      'slider' => NULL,
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
    $pane->shown = FALSE;
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
    $pane->pid = 'new-8c9a55c5-8376-4fac-a02d-8701a5e696ea';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'toolkit_sliders-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8c9a55c5-8376-4fac-a02d-8701a5e696ea';
    $display->content['new-8c9a55c5-8376-4fac-a02d-8701a5e696ea'] = $pane;
    $display->panels['contentmain'][1] = 'new-8c9a55c5-8376-4fac-a02d-8701a5e696ea';
    $pane = new stdClass();
    $pane->pid = 'new-a9e93175-80d5-4c72-8eb4-4aa1a69774b1';
    $pane->panel = 'description';
    $pane->type = 'views_panes';
    $pane->subtype = 'page_element-panel_page_element';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_page_value' => 'homepage',
        'field_location_value' => 'description',
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
    $pane->uuid = 'a9e93175-80d5-4c72-8eb4-4aa1a69774b1';
    $display->content['new-a9e93175-80d5-4c72-8eb4-4aa1a69774b1'] = $pane;
    $display->panels['description'][0] = 'new-a9e93175-80d5-4c72-8eb4-4aa1a69774b1';
    $pane = new stdClass();
    $pane->pid = 'new-878e2ca6-3997-49ec-b98d-5942c64ab05f';
    $pane->panel = 'slider';
    $pane->type = 'views_panes';
    $pane->subtype = 'homepage_slider-panel_pane_1';
    $pane->shown = FALSE;
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
    $pane->uuid = '878e2ca6-3997-49ec-b98d-5942c64ab05f';
    $display->content['new-878e2ca6-3997-49ec-b98d-5942c64ab05f'] = $pane;
    $display->panels['slider'][0] = 'new-878e2ca6-3997-49ec-b98d-5942c64ab05f';
    $pane = new stdClass();
    $pane->pid = 'new-e4290aff-1a55-463c-9139-c1d87566aaaa';
    $pane->panel = 'slider';
    $pane->type = 'homepage_carousel';
    $pane->subtype = 'homepage_carousel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e4290aff-1a55-463c-9139-c1d87566aaaa';
    $display->content['new-e4290aff-1a55-463c-9139-c1d87566aaaa'] = $pane;
    $display->panels['slider'][1] = 'new-e4290aff-1a55-463c-9139-c1d87566aaaa';
    $pane = new stdClass();
    $pane->pid = 'new-848263ce-705d-42af-ac51-c399dc52e203';
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
    $pane->uuid = '848263ce-705d-42af-ac51-c399dc52e203';
    $display->content['new-848263ce-705d-42af-ac51-c399dc52e203'] = $pane;
    $display->panels['window1'][0] = 'new-848263ce-705d-42af-ac51-c399dc52e203';
    $pane = new stdClass();
    $pane->pid = 'new-b1dc5f08-8968-4880-a62d-24735b9a2a9d';
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
    $pane->uuid = 'b1dc5f08-8968-4880-a62d-24735b9a2a9d';
    $display->content['new-b1dc5f08-8968-4880-a62d-24735b9a2a9d'] = $pane;
    $display->panels['window2'][0] = 'new-b1dc5f08-8968-4880-a62d-24735b9a2a9d';
    $pane = new stdClass();
    $pane->pid = 'new-583e0c53-1049-492d-85c7-dd9cc8fb59bc';
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
    $pane->uuid = '583e0c53-1049-492d-85c7-dd9cc8fb59bc';
    $display->content['new-583e0c53-1049-492d-85c7-dd9cc8fb59bc'] = $pane;
    $display->panels['window3'][0] = 'new-583e0c53-1049-492d-85c7-dd9cc8fb59bc';
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
    'body_classes_to_add' => 'landing',
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
      'title' => NULL,
      'subtitle' => NULL,
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
    $pane = new stdClass();
    $pane->pid = 'new-ad23488f-01a6-4b9f-9add-141e24974c5a';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'page_element-panel_page_element';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_page_value' => 'questions_concepts_landing_page',
        'field_location_value' => 'sidebar',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'jumbotron',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ad23488f-01a6-4b9f-9add-141e24974c5a';
    $display->content['new-ad23488f-01a6-4b9f-9add-141e24974c5a'] = $pane;
    $display->panels['sidebar'][0] = 'new-ad23488f-01a6-4b9f-9add-141e24974c5a';
    $pane = new stdClass();
    $pane->pid = 'new-0801afb2-dfe1-4b4e-acf7-4913ef3c8945';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0801afb2-dfe1-4b4e-acf7-4913ef3c8945';
    $display->content['new-0801afb2-dfe1-4b4e-acf7-4913ef3c8945'] = $pane;
    $display->panels['sidebar'][1] = 'new-0801afb2-dfe1-4b4e-acf7-4913ef3c8945';
    $pane = new stdClass();
    $pane->pid = 'new-e3ad0634-f707-4c9b-b8fd-2ae2bea235f0';
    $pane->panel = 'subtitle';
    $pane->type = 'views_panes';
    $pane->subtype = 'page_element-panel_page_element';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_page_value' => 'questions_concepts_landing_page',
        'field_location_value' => 'subtitle',
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
    $pane->uuid = 'e3ad0634-f707-4c9b-b8fd-2ae2bea235f0';
    $display->content['new-e3ad0634-f707-4c9b-b8fd-2ae2bea235f0'] = $pane;
    $display->panels['subtitle'][0] = 'new-e3ad0634-f707-4c9b-b8fd-2ae2bea235f0';
    $pane = new stdClass();
    $pane->pid = 'new-d3b60682-4ae1-4afb-8030-380c1227fa89';
    $pane->panel = 'title';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd3b60682-4ae1-4afb-8030-380c1227fa89';
    $display->content['new-d3b60682-4ae1-4afb-8030-380c1227fa89'] = $pane;
    $display->panels['title'][0] = 'new-d3b60682-4ae1-4afb-8030-380c1227fa89';
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
    'body_classes_to_add' => 'landing',
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
      'title' => NULL,
      'subtitle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Educational Resources';
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
    $pane->pid = 'new-d83156b7-5c43-4350-bf35-536e6c5a529c';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd83156b7-5c43-4350-bf35-536e6c5a529c';
    $display->content['new-d83156b7-5c43-4350-bf35-536e6c5a529c'] = $pane;
    $display->panels['sidebar'][0] = 'new-d83156b7-5c43-4350-bf35-536e6c5a529c';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fbe219e0-cfdc-4452-9194-499c2d3a2024';
    $display->content['new-fbe219e0-cfdc-4452-9194-499c2d3a2024'] = $pane;
    $display->panels['sidebar'][1] = 'new-fbe219e0-cfdc-4452-9194-499c2d3a2024';
    $pane = new stdClass();
    $pane->pid = 'new-4c8c094a-7418-4161-a35c-00b119ac8d72';
    $pane->panel = 'subtitle';
    $pane->type = 'views_panes';
    $pane->subtype = 'page_element-panel_page_element';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_page_value' => 'resource_library_landing_page',
        'field_location_value' => 'subtitle',
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
    $pane->uuid = '4c8c094a-7418-4161-a35c-00b119ac8d72';
    $display->content['new-4c8c094a-7418-4161-a35c-00b119ac8d72'] = $pane;
    $display->panels['subtitle'][0] = 'new-4c8c094a-7418-4161-a35c-00b119ac8d72';
    $pane = new stdClass();
    $pane->pid = 'new-09eb6645-1079-431c-8166-1f501b51e9e0';
    $pane->panel = 'title';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '09eb6645-1079-431c-8166-1f501b51e9e0';
    $display->content['new-09eb6645-1079-431c-8166-1f501b51e9e0'] = $pane;
    $display->panels['title'][0] = 'new-09eb6645-1079-431c-8166-1f501b51e9e0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['resource_library_landing_page'] = $page;

  return $pages;

}
