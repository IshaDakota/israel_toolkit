<?php
// Plugin definition
$plugin = array(
  'title' => t('Homepage Content Type'),
  'icon' => 'homepage.png',
  'category' => t('Toolkit'),
  'theme' => 'homepage',
  'regions' => array(
    'jumbotron' => t('Highlighted'),    
    'window1' => t('Window #1'),
    'window2' => t('Window #2'),
    'window3' => t('Window #3'),
    'contentmain' => t('Content'),
  ),
);
