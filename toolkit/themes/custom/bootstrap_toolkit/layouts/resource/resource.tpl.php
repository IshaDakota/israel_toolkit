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
<section class="content-abstract">
  <div class="container">
    <div class="row">
      <div class="col-md-12 panel-panel highlighted">
        <div class="panel-panel-inner">
          <?php print $content['highlighted']; ?>
        </div>
      </div>
    </div>     
  </div>
</section>

<section class="inner-page">
  <div class="container page-content">
  <a id="main-content"></a>        
    <div class="row">
      <div class="col-md-8 col-md-push-4 content panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['contentmain']; ?>
        </div>
      </div>
    <div class="col-md-4 col-md-pull-8 sidebar panel-panel">
      <div class="row">
        <div class="panel-panel-inner">
          <h2>This Resource is Referenced in:</h2>
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
