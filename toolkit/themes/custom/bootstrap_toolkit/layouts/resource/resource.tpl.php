<?php
/**
 * @file
 * Template for Resource Page.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display resource clearfix <?php if (!empty($classes)) { print $classes; } ?><?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="row">
    <div class="col-md-8 content panel-panel">
      <div class="panel-panel-inner">
        <?php print $content['contentmain']; ?>
      </div>
    </div>
    <div class="col-md-4  sidebar panel-panel">
      <div class="row">
        <div class="panel-panel-inner jumbotron">
          <div>This resource is referenced in:</div>
          <?php print $content['sidebartop']; ?>
        </div>
      </div>
      <div class="row">
        <div class="panel-panel-inner">
          <?php print $content['sidebarbottom']; ?>
        </div>
      </div>
    </div>
  </div>
</div><!-- /.resource -->
