<?php
/**
 * @file
 * Template for Toolkit Homepage.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display homepage clearfix <?php if (!empty($classes)) { print $classes; } ?><?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="row">
    <div class="col-md-12 jumbotron panel-panel">
      <div class="panel-panel-inner">
        <?php print $content['jumbotron']; ?>
      </div>
    </div>
  </div>  
  <div class="row">
    <div class="col-md-4 sidebar panel-panel">
      <div class="panel-panel-inner">
        <div class="window toolkit-content">
          <div class="toolkit-title upper h3"><?php print t('Content & Programs'); ?></div>
          <?php print $content['window1']; ?>
        </div>
      </div>
    </div>
    <div class="col-md-4 sidebar panel-panel">
      <div class="panel-panel-inner">
        <div class="window toolkit-concepts">
          <div class="toolkit-title upper h3"><?php print t('Questions & Concepts'); ?></div>
          <?php print $content['window2']; ?>
        </div>
      </div>
    </div>    
    <div class="col-md-4 sidebar panel-panel">
      <div class="panel-panel-inner">
        <div class="window toolkit-library">
          <div class="toolkit-title upper h3"><?php print t('Resource Library'); ?></div>
          <?php print $content['window3']; ?>
        </div>
      </div>
    </div>
  </div>
  <div class="row">
    <div class="col-md-12 content panel-panel">
      <div class="panel-panel-inner">
        <?php print $content['contentmain']; ?>
      </div>
    </div>
  </div>
</div><!-- /.burr-flipped -->
