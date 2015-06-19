<?php
// Plugin definition
$plugin = array(
  'title' => t('Resource Page'),
  'icon' => 'resource.png',
  'category' => t('Toolkit'),
  'theme' => 'resource',
  'regions' => array(
    'title' => t('Title'),
    'sidebartop' => t('Sidebar - Top'),
    'sidebarbottom' => t('Sidebar - Bottom'),
    'contentmain' => t('Content'),
  ),
);
