<?php
// Plugin definition
$plugin = array(
  'title' => t('Curriculum Content Type'),
  'icon' => 'curriculum.png',
  'category' => t('Toolkit'),
  'theme' => 'curriculum',
  'regions' => array(
    'jumbotron' => t('Title'),    
    'subtitle' => t('Subtitle'),   
    'contentmain' => t('Content'),
    'sidebar' => t('Sidebar'),
  ),
);
