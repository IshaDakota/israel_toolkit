<section class="featured-initiative">
  <div class="container">
    <div class="col-md-10  col-md-offset-1">
      <div class="row">
        <div class="homepage-carousel">
          <?php foreach($initiatives as $initiative): ?>
            <div class="carousel-item container">
              <div class="row">
                <div class="col-sm-5">
                  <h2 class="title"><?php print $initiative['title']; ?></h2>
                  <?php print $initiative['body']; ?>
                  <a class="btn btn-learn-more purple-bg" href="<?php print $initiative['link']; ?>"><?php print t("Learn more"); ?></a>
                </div>
                <?php if (!empty($initiative['image_url'])): ?>
                  <div class="col-sm-7">
                    <?php print $initiative['image_url']; ?>
                  </div>
                <?php endif; ?>
              </div>
            </div>
          <?php endforeach; ?>
        </div>
      </div>
    </div>
  </div>
</section>
