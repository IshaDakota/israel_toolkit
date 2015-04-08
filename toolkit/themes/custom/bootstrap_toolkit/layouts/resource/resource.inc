<?php
// Plugin definition
$plugin = array(
  'title' => t('Resource Page'),
  'icon' => 'resource.png',
  'category' => t('Toolkit'),
  'theme' => 'resource',
  'regions' => array(
    'sidebartop' => t('Sidebar - Top'),
    'sidebarbottom' => t('Sidebar - Bottom'),
    'contentmain' => t('Content'),
    'highlighted' => t('Highlighted'),    
  ),
);
