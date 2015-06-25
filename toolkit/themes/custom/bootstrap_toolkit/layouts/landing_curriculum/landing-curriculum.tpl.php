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
          <?php print $content['title']; ?>
        </div>
        <div class="hr">
        </div>
        <div class="subtitle content-programs">
          <?php print $content['subtitle']; ?>
        </div>
      </div>
    </div>     
  </div>
</section>

<section class="inner-page">
  <div class="container page-content">
  <a id="main-content"></a>  
    <div class="row">
      <div class="col-md-12 content-top panel-panel">
        <div class="panel-panel-inner">
          <h2 class="pane-title">Themes</h2>
          <div id="theme-menu"> 
            <ul>     
                <li class="dilemmas"><a href="#">Dilemmas</a></li>     
                <li class="empathy"><a href="#">Empathy</a></li>     
                <li class="politics"><a href="#">Politics</a></li>     
                <li class="reconciliation"><a href="#">War, Peace & Reconciliation</a></li>     
                <li class="consequence"><a href="#">Lasting Consequences</a></li> 
                <li class="narratives"><a href="#">Narratives</a></li>     
                <li class="silver"><a href="#">Silver Lining</a></li> 
            </ul>
          </div>
        </div>          
      </div>
    </div>
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
  </div>
</section>