<?php
/**
 * @file
 * Template for Default Landing Page.
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
      <div class="col-md-8 col-md-offset-1 content panel-panel highlighted">
        <div class="title content-programs">
          <?php print $content['title']; ?>
        </div>
        <div class="subtitle content-programs">
          <?php print $content['subtitle']; ?>
          <?php print $content['contentmain']; ?>        
        </div>
      </div>
      <div class="col-md-3 sidebar panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['sidebar']; ?>
        </div>
      </div>
    </div>     
  </div>
</section>
