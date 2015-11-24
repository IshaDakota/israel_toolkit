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
  $handler->name = 'term_view__panel_context_04299943-b859-4189-a271-7eb83def68ad';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Age Terms',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'landing',
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
              'age' => 'age',
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
    $pane->pid = 'new-76fc5be2-cb67-44b3-98a7-c922c13c0016';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
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
    $pane->uuid = '76fc5be2-cb67-44b3-98a7-c922c13c0016';
    $display->content['new-76fc5be2-cb67-44b3-98a7-c922c13c0016'] = $pane;
    $display->panels['sidebar'][0] = 'new-76fc5be2-cb67-44b3-98a7-c922c13c0016';
    $pane = new stdClass();
    $pane->pid = 'new-b966c324-5f63-403b-bebb-6eac3f7a9cdc';
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
    $pane->uuid = 'b966c324-5f63-403b-bebb-6eac3f7a9cdc';
    $display->content['new-b966c324-5f63-403b-bebb-6eac3f7a9cdc'] = $pane;
    $display->panels['sidebar'][1] = 'new-b966c324-5f63-403b-bebb-6eac3f7a9cdc';
    $pane = new stdClass();
    $pane->pid = 'new-be8825e6-fc92-4ca7-a421-539bafdb1f42';
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
    $pane->uuid = 'be8825e6-fc92-4ca7-a421-539bafdb1f42';
    $display->content['new-be8825e6-fc92-4ca7-a421-539bafdb1f42'] = $pane;
    $display->panels['sidebar'][2] = 'new-be8825e6-fc92-4ca7-a421-539bafdb1f42';
    $pane = new stdClass();
    $pane->pid = 'new-190c219c-abe3-4ac3-b2d1-b85aaeba261b';
    $pane->panel = 'subtitle';
    $pane->type = 'term_description';
    $pane->subtype = 'term_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_term_1',
      'override_title' => 1,
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
    $pane->uuid = '190c219c-abe3-4ac3-b2d1-b85aaeba261b';
    $display->content['new-190c219c-abe3-4ac3-b2d1-b85aaeba261b'] = $pane;
    $display->panels['subtitle'][0] = 'new-190c219c-abe3-4ac3-b2d1-b85aaeba261b';
    $pane = new stdClass();
    $pane->pid = 'new-90e1e0b7-8ba9-4b6e-89f1-3a2491fab341';
    $pane->panel = 'title';
    $pane->type = 'term_name';
    $pane->subtype = 'term_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_term_1',
      'override_title' => 1,
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
    $pane->uuid = '90e1e0b7-8ba9-4b6e-89f1-3a2491fab341';
    $display->content['new-90e1e0b7-8ba9-4b6e-89f1-3a2491fab341'] = $pane;
    $display->panels['title'][0] = 'new-90e1e0b7-8ba9-4b6e-89f1-3a2491fab341';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_04299943-b859-4189-a271-7eb83def68ad'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_44a175e0-37da-4423-8051-b60ba2ef158a';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'Source Terms',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'landing',
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
              'resource_source' => 'resource_source',
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
  $display->title = '';
  $display->uuid = 'a3d7839b-08ed-4019-aee4-d22fd61e1380';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-309a591d-89cb-45bb-bfb4-e4e7cea66ff3';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'theme_terms-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
      'override_title' => 1,
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
    $pane->uuid = '309a591d-89cb-45bb-bfb4-e4e7cea66ff3';
    $display->content['new-309a591d-89cb-45bb-bfb4-e4e7cea66ff3'] = $pane;
    $display->panels['contentmain'][0] = 'new-309a591d-89cb-45bb-bfb4-e4e7cea66ff3';
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
      'override_title_text' => 'Sources',
      'include_current_term' => 0,
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
    $pane->uuid = 'cd322d01-1a6c-4ead-bfa8-7dffd8059d40';
    $display->content['new-cd322d01-1a6c-4ead-bfa8-7dffd8059d40'] = $pane;
    $display->panels['sidebar'][0] = 'new-cd322d01-1a6c-4ead-bfa8-7dffd8059d40';
    $pane = new stdClass();
    $pane->pid = 'new-190c219c-abe3-4ac3-b2d1-b85aaeba261b';
    $pane->panel = 'subtitle';
    $pane->type = 'term_description';
    $pane->subtype = 'term_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_term_1',
      'override_title' => 1,
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
    $pane->uuid = '190c219c-abe3-4ac3-b2d1-b85aaeba261b';
    $display->content['new-190c219c-abe3-4ac3-b2d1-b85aaeba261b'] = $pane;
    $display->panels['subtitle'][0] = 'new-190c219c-abe3-4ac3-b2d1-b85aaeba261b';
    $pane = new stdClass();
    $pane->pid = 'new-90e1e0b7-8ba9-4b6e-89f1-3a2491fab341';
    $pane->panel = 'title';
    $pane->type = 'term_name';
    $pane->subtype = 'term_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_term_1',
      'override_title' => 1,
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
    $pane->uuid = '90e1e0b7-8ba9-4b6e-89f1-3a2491fab341';
    $display->content['new-90e1e0b7-8ba9-4b6e-89f1-3a2491fab341'] = $pane;
    $display->panels['title'][0] = 'new-90e1e0b7-8ba9-4b6e-89f1-3a2491fab341';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-cd322d01-1a6c-4ead-bfa8-7dffd8059d40';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_44a175e0-37da-4423-8051-b60ba2ef158a'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_52a85693-3e1a-4628-8356-55a36351f0f1';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'Tag Terms',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'landing',
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
              'resource_tags' => 'resource_tags',
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
  $display->title = '';
  $display->uuid = 'a3d7839b-08ed-4019-aee4-d22fd61e1380';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-309a591d-89cb-45bb-bfb4-e4e7cea66ff3';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'theme_terms-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
      'override_title' => 1,
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
    $pane->uuid = '309a591d-89cb-45bb-bfb4-e4e7cea66ff3';
    $display->content['new-309a591d-89cb-45bb-bfb4-e4e7cea66ff3'] = $pane;
    $display->panels['contentmain'][0] = 'new-309a591d-89cb-45bb-bfb4-e4e7cea66ff3';
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
      'override_title_text' => 'Topics',
      'include_current_term' => 0,
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
    $pane->uuid = 'cd322d01-1a6c-4ead-bfa8-7dffd8059d40';
    $display->content['new-cd322d01-1a6c-4ead-bfa8-7dffd8059d40'] = $pane;
    $display->panels['sidebar'][0] = 'new-cd322d01-1a6c-4ead-bfa8-7dffd8059d40';
    $pane = new stdClass();
    $pane->pid = 'new-190c219c-abe3-4ac3-b2d1-b85aaeba261b';
    $pane->panel = 'subtitle';
    $pane->type = 'term_description';
    $pane->subtype = 'term_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_term_1',
      'override_title' => 1,
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
    $pane->uuid = '190c219c-abe3-4ac3-b2d1-b85aaeba261b';
    $display->content['new-190c219c-abe3-4ac3-b2d1-b85aaeba261b'] = $pane;
    $display->panels['subtitle'][0] = 'new-190c219c-abe3-4ac3-b2d1-b85aaeba261b';
    $pane = new stdClass();
    $pane->pid = 'new-90e1e0b7-8ba9-4b6e-89f1-3a2491fab341';
    $pane->panel = 'title';
    $pane->type = 'term_name';
    $pane->subtype = 'term_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_term_1',
      'override_title' => 1,
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
    $pane->uuid = '90e1e0b7-8ba9-4b6e-89f1-3a2491fab341';
    $display->content['new-90e1e0b7-8ba9-4b6e-89f1-3a2491fab341'] = $pane;
    $display->panels['title'][0] = 'new-90e1e0b7-8ba9-4b6e-89f1-3a2491fab341';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-cd322d01-1a6c-4ead-bfa8-7dffd8059d40';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_52a85693-3e1a-4628-8356-55a36351f0f1'] = $handler;

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
    'body_classes_to_add' => 'landing',
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
    $pane->pid = 'new-0f9815fa-d4e7-4bd4-8e72-ba6dede86bdb';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
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
    $pane->uuid = '0f9815fa-d4e7-4bd4-8e72-ba6dede86bdb';
    $display->content['new-0f9815fa-d4e7-4bd4-8e72-ba6dede86bdb'] = $pane;
    $display->panels['sidebar'][0] = 'new-0f9815fa-d4e7-4bd4-8e72-ba6dede86bdb';
    $pane = new stdClass();
    $pane->pid = 'new-748457b5-3f15-466e-b13b-ae960d6df376';
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
    $pane->uuid = '748457b5-3f15-466e-b13b-ae960d6df376';
    $display->content['new-748457b5-3f15-466e-b13b-ae960d6df376'] = $pane;
    $display->panels['sidebar'][1] = 'new-748457b5-3f15-466e-b13b-ae960d6df376';
    $pane = new stdClass();
    $pane->pid = 'new-9cf2a205-5d9c-4647-bdce-68d1108ce8b7';
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
    $pane->uuid = '9cf2a205-5d9c-4647-bdce-68d1108ce8b7';
    $display->content['new-9cf2a205-5d9c-4647-bdce-68d1108ce8b7'] = $pane;
    $display->panels['sidebar'][2] = 'new-9cf2a205-5d9c-4647-bdce-68d1108ce8b7';
    $pane = new stdClass();
    $pane->pid = 'new-844d07ef-b94f-4c34-9713-98b5b8e887a0';
    $pane->panel = 'subtitle';
    $pane->type = 'term_description';
    $pane->subtype = 'term_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_term_1',
      'override_title' => 1,
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
    $pane->uuid = '844d07ef-b94f-4c34-9713-98b5b8e887a0';
    $display->content['new-844d07ef-b94f-4c34-9713-98b5b8e887a0'] = $pane;
    $display->panels['subtitle'][0] = 'new-844d07ef-b94f-4c34-9713-98b5b8e887a0';
    $pane = new stdClass();
    $pane->pid = 'new-aee11d9c-53d1-4918-a5a5-7348bf4c8329';
    $pane->panel = 'title';
    $pane->type = 'term_name';
    $pane->subtype = 'term_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_term_1',
      'override_title' => 1,
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
    $pane->uuid = 'aee11d9c-53d1-4918-a5a5-7348bf4c8329';
    $display->content['new-aee11d9c-53d1-4918-a5a5-7348bf4c8329'] = $pane;
    $display->panels['title'][0] = 'new-aee11d9c-53d1-4918-a5a5-7348bf4c8329';
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
    'body_classes_to_add' => 'landing',
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
    $pane = new stdClass();
    $pane->pid = 'new-f138a965-060b-423a-a71c-631146d01075';
    $pane->panel = 'subtitle';
    $pane->type = 'term_description';
    $pane->subtype = 'term_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_term_1',
      'override_title' => 1,
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
    $pane->uuid = 'f138a965-060b-423a-a71c-631146d01075';
    $display->content['new-f138a965-060b-423a-a71c-631146d01075'] = $pane;
    $display->panels['subtitle'][0] = 'new-f138a965-060b-423a-a71c-631146d01075';
    $pane = new stdClass();
    $pane->pid = 'new-3937d93e-a9a2-4b94-95d9-c3de9584dee6';
    $pane->panel = 'title';
    $pane->type = 'term_name';
    $pane->subtype = 'term_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_term_1',
      'override_title' => 1,
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
    $pane->uuid = '3937d93e-a9a2-4b94-95d9-c3de9584dee6';
    $display->content['new-3937d93e-a9a2-4b94-95d9-c3de9584dee6'] = $pane;
    $display->panels['title'][0] = 'new-3937d93e-a9a2-4b94-95d9-c3de9584dee6';
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
    'body_classes_to_add' => 'landing',
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
    $pane = new stdClass();
    $pane->pid = 'new-bbb2948a-fe28-436c-b006-f3b2fa14928a';
    $pane->panel = 'subtitle';
    $pane->type = 'term_description';
    $pane->subtype = 'term_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_term_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bbb2948a-fe28-436c-b006-f3b2fa14928a';
    $display->content['new-bbb2948a-fe28-436c-b006-f3b2fa14928a'] = $pane;
    $display->panels['subtitle'][0] = 'new-bbb2948a-fe28-436c-b006-f3b2fa14928a';
    $pane = new stdClass();
    $pane->pid = 'new-0b0c7abf-51ce-4ad6-b2b5-77165306d388';
    $pane->panel = 'title';
    $pane->type = 'term_name';
    $pane->subtype = 'term_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_term_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0b0c7abf-51ce-4ad6-b2b5-77165306d388';
    $display->content['new-0b0c7abf-51ce-4ad6-b2b5-77165306d388'] = $pane;
    $display->panels['title'][0] = 'new-0b0c7abf-51ce-4ad6-b2b5-77165306d388';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-cd322d01-1a6c-4ead-bfa8-7dffd8059d40';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_3'] = $handler;

  return $export;
}
