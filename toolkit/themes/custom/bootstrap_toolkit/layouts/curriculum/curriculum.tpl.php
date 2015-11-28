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
<!-- Modal HTML -->
<div id="ageModal" class="modal fade">
    <div class="modal-dialog">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-hidden="true">&times;</button>
                <h4 class="modal-title">Approaching Conflicts: Age Range</h4>
            </div>
            <div class="modal-body">
                <p>The range listed here is the age appropriateness for the program as it is written. Most Approaching Conflicts programs can be adapted to multiple ages.  All content deals with serious, sometimes sensitive, material and educators should always evaluate their audience and their capacity to understand and grasp the issues presented in the material.</p>
            </div>
            <div class="modal-footer">
                <button type="button" class="btn btn-default" data-dismiss="modal">Close</button>
            </div>
        </div>
    </div>
</div>
<div id="themeModal" class="modal fade">
    <div class="modal-dialog">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-hidden="true">&times;</button>
                <h4 class="modal-title">Approaching Conflicts: Age Range</h4>
            </div>
            <div class="modal-body">
                <p>The range listed here is the age appropriateness for the program as it is written. Most Approaching Conflicts programs can be adapted to multiple ages.  All content deals with serious, sometimes sensitive, material and educators should always evaluate their audience and their capacity to understand and grasp the issues presented in the material.</p>
            </div>
            <div class="modal-footer">
                <button type="button" class="btn btn-default" data-dismiss="modal">Close</button>
            </div>
        </div>
    </div>
</div>
<div id="subjectModal" class="modal fade">
    <div class="modal-dialog">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-hidden="true">&times;</button>
                <h4 class="modal-title">Approaching Conflicts: Age Range</h4>
            </div>
            <div class="modal-body">
                <p>The range listed here is the age appropriateness for the program as it is written. Most Approaching Conflicts programs can be adapted to multiple ages.  All content deals with serious, sometimes sensitive, material and educators should always evaluate their audience and their capacity to understand and grasp the issues presented in the material.</p>
            </div>
            <div class="modal-footer">
                <button type="button" class="btn btn-default" data-dismiss="modal">Close</button>
            </div>
        </div>
    </div>
</div>
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
