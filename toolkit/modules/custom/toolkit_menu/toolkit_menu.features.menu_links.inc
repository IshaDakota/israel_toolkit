<?php
/**
 * @file
 * toolkit_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function toolkit_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_concepts:questions-concepts
  $menu_links['main-menu_concepts:questions-concepts'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'questions-concepts',
    'router_path' => 'questions-concepts',
    'link_title' => 'Concepts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_concepts:questions-concepts',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_programs:curriculum-content
  $menu_links['main-menu_programs:curriculum-content'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'curriculum-content',
    'router_path' => 'curriculum-content',
    'link_title' => 'Programs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_programs:curriculum-content',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_resource-library:resource-library
  $menu_links['main-menu_resource-library:resource-library'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resource-library',
    'router_path' => 'resource-library',
    'link_title' => 'Resource Library',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_resource-library:resource-library',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Concepts');
  t('Home');
  t('Programs');
  t('Resource Library');


  return $menu_links;
}
