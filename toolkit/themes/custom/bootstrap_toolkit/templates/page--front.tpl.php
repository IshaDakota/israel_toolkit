<header>
  <div class="container">
    <div class="row">
      <div class="col-md-12 main-nav upper">
        <div class="navbar-header">
          <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
            <span class="sr-only">Toggle navigation</span>
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
          </button>
        </div>
        <div class="navbar-collapse collapse">
          <nav role="navigation">
            <?php print render($primary_nav); ?>
          </nav>
        </div>
      </div>
    </div>
    <div class="row">
      <div class="col-md-12">
        <div class="logo-wrapper"><div class="logo"></div></div>
      </div>
    </div>
    <div class="row">
      <div class="col-md-12">
        <div class="small-title-wrapper"><div class="small-title">Engaging Israel:</div></div>
      </div>
    </div>
    <div class="row">
      <div class="col-md-12">
        <div class="large-title-wrapper"><div class="large-title">A Conflict Education Toolkit</div></div>
      </div>
    </div>
    <div class="row">
      <div class="col-md-12">
        <div class="homepage-message-wrapper"><div class="homepage-message">
The Israel conflict toolkit is designed to be a sophisticated and nuanced approach to learning, discussing, and understanding Israel in conflict. The toolkit explores this aspect of Israel education as a key component in Jewish identity formation and seeks to involve learners and educators in meaningful engagement with Israel.</div></div>
      </div>
    </div>
    <div class="row">
      <div class="col-md-12">
        <div class="learn-more-wrapper">
          <div class="learn-more"><a href="#expand">Learn More</a></div>
        </div>
      </div>
    </div>
  </div>
</header>

<div class="container">
  <?php print $messages; ?>
</div>

<section class="homepage">
  <div class="container">

    <?php print render($page['content']); ?>
    
  </div>
</section>
<footer class="footer">
    <div class="row disclaimer">
      <div class="col-md-12 footer-credit">
        <p>The Conflict Toolkit is a project of <a href="http://www.theicenter.org">the iCenter</a> made possible through a grant from the Jim Joseph Foundation.</p>
        <div class="icenter-logo"></div>
        <div class="jjf-logo"></div>
      </div>
    </div>
</footer>

