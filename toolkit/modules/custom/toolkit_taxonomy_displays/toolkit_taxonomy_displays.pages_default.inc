<?php
/**
 * @file
 * toolkit_taxonomy_displays.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function toolkit_taxonomy_displays_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Theme Terms',
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
          'name' => 'entity_bundle:taxonomy_term',
          'settings' => array(
            'type' => array(
              'themes' => 'themes',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_right';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2250aab0-2a4b-442d-8c16-e1f2fb84ed41';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ee9171ca-0277-415f-b2ac-610157456010';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'theme_terms-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
      'override_title' => 1,
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
    $pane->uuid = 'ee9171ca-0277-415f-b2ac-610157456010';
    $display->content['new-ee9171ca-0277-415f-b2ac-610157456010'] = $pane;
    $display->panels['contentmain'][0] = 'new-ee9171ca-0277-415f-b2ac-610157456010';
    $pane = new stdClass();
    $pane->pid = 'new-d3e75404-34e6-431d-8e66-0d5450ee2d4c';
    $pane->panel = 'sidebar';
    $pane->type = 'term_list';
    $pane->subtype = 'term_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'title' => NULL,
      'type' => 'top',
      'list_type' => 'ul',
      'path' => 'taxonomy/term',
      'context' => 'argument_term_1',
      'override_title' => 1,
      'override_title_text' => 'Themes',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd3e75404-34e6-431d-8e66-0d5450ee2d4c';
    $display->content['new-d3e75404-34e6-431d-8e66-0d5450ee2d4c'] = $pane;
    $display->panels['sidebar'][0] = 'new-d3e75404-34e6-431d-8e66-0d5450ee2d4c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_2';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Value Terms',
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
          'name' => 'entity_bundle:taxonomy_term',
          'settings' => array(
            'type' => array(
              'values' => 'values',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_right';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a3d7839b-08ed-4019-aee4-d22fd61e1380';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6c51b5ac-3797-4a1c-b507-b205ed6594b3';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'theme_terms-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
      'override_title' => 1,
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
    $pane->uuid = '6c51b5ac-3797-4a1c-b507-b205ed6594b3';
    $display->content['new-6c51b5ac-3797-4a1c-b507-b205ed6594b3'] = $pane;
    $display->panels['contentmain'][0] = 'new-6c51b5ac-3797-4a1c-b507-b205ed6594b3';
    $pane = new stdClass();
    $pane->pid = 'new-cd322d01-1a6c-4ead-bfa8-7dffd8059d40';
    $pane->panel = 'sidebar';
    $pane->type = 'term_list';
    $pane->subtype = 'term_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'title' => NULL,
      'type' => 'top',
      'list_type' => 'ul',
      'path' => 'taxonomy/term',
      'context' => 'argument_term_1',
      'override_title' => 1,
      'override_title_text' => 'Values',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cd322d01-1a6c-4ead-bfa8-7dffd8059d40';
    $display->content['new-cd322d01-1a6c-4ead-bfa8-7dffd8059d40'] = $pane;
    $display->panels['sidebar'][0] = 'new-cd322d01-1a6c-4ead-bfa8-7dffd8059d40';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-cd322d01-1a6c-4ead-bfa8-7dffd8059d40';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_3';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Relevance Terms',
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
          'name' => 'entity_bundle:taxonomy_term',
          'settings' => array(
            'type' => array(
              'relevance' => 'relevance',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_right';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a3d7839b-08ed-4019-aee4-d22fd61e1380';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6c51b5ac-3797-4a1c-b507-b205ed6594b3';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'theme_terms-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
      'override_title' => 1,
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
    $pane->uuid = '6c51b5ac-3797-4a1c-b507-b205ed6594b3';
    $display->content['new-6c51b5ac-3797-4a1c-b507-b205ed6594b3'] = $pane;
    $display->panels['contentmain'][0] = 'new-6c51b5ac-3797-4a1c-b507-b205ed6594b3';
    $pane = new stdClass();
    $pane->pid = 'new-cd322d01-1a6c-4ead-bfa8-7dffd8059d40';
    $pane->panel = 'sidebar';
    $pane->type = 'term_list';
    $pane->subtype = 'term_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'title' => NULL,
      'type' => 'top',
      'list_type' => 'ul',
      'path' => 'taxonomy/term',
      'context' => 'argument_term_1',
      'override_title' => 1,
      'override_title_text' => 'Timely Relevance',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cd322d01-1a6c-4ead-bfa8-7dffd8059d40';
    $display->content['new-cd322d01-1a6c-4ead-bfa8-7dffd8059d40'] = $pane;
    $display->panels['sidebar'][0] = 'new-cd322d01-1a6c-4ead-bfa8-7dffd8059d40';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-cd322d01-1a6c-4ead-bfa8-7dffd8059d40';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_3'] = $handler;

  return $export;
}
