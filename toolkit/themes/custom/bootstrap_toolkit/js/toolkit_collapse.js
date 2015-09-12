jQuery.noConflict();
(function($) {
Drupal.behaviors.myBehavior = {
  attach: function (context, settings) {
$('.collapse').on('shown.bs.collapse', function(){
$(this).parent().find(".glyphicon-plus").removeClass("glyphicon-plus").addClass("glyphicon-minus");
}).on('hidden.bs.collapse', function(){
$(this).parent().find(".glyphicon-minus").removeClass("glyphicon-minus").addClass("glyphicon-plus");
});
    //code ends


  }
};
})(jQuery);
