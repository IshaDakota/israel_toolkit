<section id="page-top" class="homepage-content">
  <div class="fluid-container">
    <div class="row">
      <div class="homepage-message clearfix">
        <div class="col-md-6 col-md-offset-3 panel-panel">
          <div class="message-container">
            <div class="message-text">
              <?php print $content['description']; ?>
            </div>
          </div>
        </div>
      </div>
    </div>
  </div>
  <div class="container">
    <div id="content-slider" class="row slider">
      <div class="col-md-12 content panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['slider']; ?>
        </div>
      </div>
    </div>
    <div id="approach-box" class="homepage-texts approach">
      <div class="row">
        <h2>Our Approach</h2>
        <div class="col-md-4">
          <img src="<?php print path_to_theme() ?>/images/approaches.png" class="img-responsive">
        </div>
        <div class="col-md-8 content panel-panel">
          <div class="panel-panel-inner">
            <?php print $content['window1']; ?>
          </div>      
        </div>
      </div>
      <div class="row">
        <div class="nav-boxes">
          <a href="#pillars-box" class="smooth"><span class="glyphicon glyphicon-chevron-down"></span></a>
          <a href="#page-top" class="smooth">Top</a>
        </div>
      </div>  
    </div>

    <div id="pillars-box" class="homepage-texts pillars">
      <div class="row">
        <h2>Educational Pillars</h2>
        <div class="col-md-4 col-md-push-8">
          <img src="<?php print path_to_theme() ?>/images/pillars.png" class="img-responsive">
        </div>
        <div class="col-md-8 col-md-pull-4 content panel-panel">
          <div class="panel-panel-inner">
            <?php print $content['window2']; ?>
          </div>      
        </div>
      </div>
      <div class="row">
        <div class="nav-boxes">
          <a href="#approach-box" class="smooth"><span class="glyphicon glyphicon-chevron-up"></span></a>
          <a href="#page-top" class="smooth">Top</a>
          <a href="#values-box" class="smooth"><span class="glyphicon glyphicon-chevron-down"></span></a>
        </div>
      </div>
    </div>

    <div id="values-box" class="homepage-texts values">
      <div class="row">
        <h2>Framing Values</h2>
        <div class="col-md-4">
          <img src="<?php print path_to_theme() ?>/images/values.png" class="img-responsive">
        </div>
        <div class="col-md-8 content panel-panel clearfix">
          <div class="panel-panel-inner">
            <?php print $content['window3']; ?>
          </div>      
        </div>
      </div>
      <div class="row">
        <div class="nav-boxes">
          <a href="#page-top" class="smooth">Top</a>
          <a href="#pillars-box" class="smooth"><span class="glyphicon glyphicon-chevron-up"></span></a>
        </div>
      </div>
    </div>
  </div>
</section>
