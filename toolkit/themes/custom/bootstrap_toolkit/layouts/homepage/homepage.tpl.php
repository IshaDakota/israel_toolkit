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
  <div class="row buckets">
    <div class="col-md-4 panel-panel">
      <div class="panel-panel-inner">
        <div class="window toolkit-content">
          <div class="toolkit-title upper h3"><a href="curriculum-content"><?php print t('Programs & Activities'); ?></a></div>
          <div class="toolkit-desc"><?php print $content['window1']; ?></div>
        </div>
      </div>
    </div>
    <div class="col-md-4 panel-panel">
      <div class="panel-panel-inner">
        <div class="window toolkit-library">
          <div class="toolkit-title upper h3"><a href="resource-library"><?php print t('Educational Resources'); ?></a></div>
          <div class="toolkit-desc"><?php print $content['window3']; ?></div>
        </div>
      </div>
    </div>
    <div class="col-md-4 panel-panel">
      <div class="panel-panel-inner">
        <div class="window toolkit-concepts">
          <div class="toolkit-title upper h3"><a href="questions-concepts"><?php print t('Questions & Concepts'); ?></a></div>
          <div class="toolkit-desc"><?php print $content['window2']; ?></div>
        </div>
      </div>
    </div>
  </div>
  <div class="row learn-more">
    <div class="col-md-12 content panel-panel">
      <div class="panel-panel-inner">
        <div class="hr"></div>
        <div id="expand-section">
          <a id="specialcontent"></a>
          <?php print $content['contentmain']; ?>
        </div>
      </div>
    </div>
  </div>
</div><!-- /.burr-flipped -->
