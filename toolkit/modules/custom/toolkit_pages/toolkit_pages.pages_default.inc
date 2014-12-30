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
  $page->name = 'homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = '';
  $page->path = 'home';
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

  return $pages;

}
