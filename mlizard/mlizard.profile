<?php
/**
 * @file
 * Garmentbox profile.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
function taglit_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
}

/**
 * Implements hook_install_tasks().
 */
function taglit_install_tasks() {
  $tasks = array();

  $tasks['taglit_set_variables'] = array(
    'display_name' => st('Set Variables'),
    'display' => FALSE,
  );

  $tasks['taglit_set_permissions'] = array(
    'display_name' => st('Set Permissions'),
    'display' => FALSE,
  );

  $tasks['taglit_setup_blocks'] = array(
    'display_name' => st('Setup Blocks'),
    'display' => FALSE,
  );

  return $tasks;
}

/**
 * Task callback; Set variables.
 */
function taglit_set_variables() {
  $variables = array(
    // Mime-mail.
    'mimemail_format' => 'full_html',
    'mimemail_sitestyle' => FALSE,
    'mimemail_name' => 'Ethosia',
    'mimemail_mail' => 'info@taglit.co.il',
    // Theme default.
    'theme_default' => 'bootstrap_subtheme',
    // jQuery versions.
    'jquery_update_jquery_version' => '1.10',
    'jquery_update_jquery_admin_version' => '1.5',
    // Set frontpage.
    'site_frontpage' => 'home',
    // Enable contact us page manager.
    'page_manager_contact_site_disabled' => FALSE,
    // Enable term page manager.
    'page_manager_term_view_disabled' => FALSE,
    // Private files dir.
    'file_private_path' => 'sites/default/files/private',
  );

  foreach ($variables as $key => $value) {
    variable_set($key, $value);
  }
}

/**
 * Task callback; Create permissions.
 */
function taglit_set_permissions(&$install_state) {
  // Enable default permissions for anonymous users.
  $permissions = array(
    'access content',
    'access site-wide contact form',
    'use text format filtered_html',
  );
  user_role_grant_permissions(DRUPAL_ANONYMOUS_RID, $permissions);
  user_role_grant_permissions(DRUPAL_AUTHENTICATED_RID, $permissions);
}

/**
 * Task callback; Setup blocks.
 */
function taglit_setup_blocks() {
  $default_theme = 'bootstrap_subtheme';

  $blocks = array();

  $blocks[] = array(
    'module' => 'menu',
    'delta' => 'menu-taglit-main',
    'theme' => $default_theme,
    'status' => 1,
    'weight' => 0,
    'region' => 'navigation',
    'custom' => 0,
    'visibility' => 0,
    'pages' => '',
    'title' => '<none>',
    'cache' => DRUPAL_NO_CACHE,
  );

  drupal_static_reset();
  _block_rehash($default_theme);
  foreach ($blocks as $record) {
    db_merge('block')
      ->fields($record)
      ->condition('module', $record['module'])
      ->condition('delta', $record['delta'])
      ->condition('theme', $record['theme'])
      ->execute();
  }
}
