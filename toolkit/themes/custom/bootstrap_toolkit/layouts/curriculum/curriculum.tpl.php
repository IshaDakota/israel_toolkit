<?php
/**
 * @file
 * Template for Panopoly Burr Flipped.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>
<section class="page-content">
  <div class="container">
    <div class="row">
      <div class="col-md-7 col-md-offset-1 panel-panel highlighted">
        <div class="panel-panel-inner">
          <?php print $content['jumbotron']; ?>
          <?php print $content['subtitle']; ?>
          <?php print $content['contentmain']; ?>
        </div>
      </div>
      <div class="col-md-4 panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['sidebar']; ?>
        </div>
      </div>
    </div>
  </div>
</section>
