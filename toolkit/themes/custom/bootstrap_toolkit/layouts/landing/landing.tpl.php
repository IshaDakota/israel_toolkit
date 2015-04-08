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
<section class="content-abstract">
  <div class="container">
    <div class="row">
      <div class="col-md-12 panel-panel highlighted">
        <div class="title content-programs">
          <h1>Content & Programs</h1>
        </div>
        <div class="hr">
        </div>        
      </div>
    </div>     
  </div>
</section>

<section class="inner-page">
  <div class="row">
    <div class="col-md-8 col-md-push-4 content panel-panel">
      <div class="panel-panel-inner">
        <?php print $content['contentmain']; ?>
      </div>
    </div>
    <div class="col-md-4 col-md-pull-8 sidebar panel-panel">
      <div class="panel-panel-inner">
        <?php print $content['sidebar']; ?>
      </div>
    </div>
  </div>
</section>