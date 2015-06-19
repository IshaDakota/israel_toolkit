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
<section class="content-abstract">
  <div class="container">
    <div class="row">
      <div class="col-md-12 panel-panel highlighted">
        <div class="panel-panel-inner">
          <?php print $content['title']; ?>
        </div>
      </div>
    </div>     
  </div>
</section>

<section class="inner-page">
  <div class="container page-content">
  <a id="main-content"></a>        
    <div class="row">
      <div class="col-md-8 content panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['contentmain']; ?>
        </div>
      </div>
      <div class="col-md-4 sidebar panel-panel">
        <div class="panel-panel-inner">
         <div class="row">
          <div class="panel-panel-inner no-jumbotron">
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
</section>
