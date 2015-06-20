<?php
// Plugin definition
$plugin = array(
  'title' => t('Default Landing Page'),
  'icon' => 'landing.png',
  'category' => t('Toolkit'),
  'theme' => 'landing',
  'regions' => array(
    'title' => t('Title'),
    'subtitle' => t('Subitle'),
    'sidebar' => t('Sidebar'),
    'contentmain' => t('Content'),
  ),
);
