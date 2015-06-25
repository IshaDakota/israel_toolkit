(function ($, Drupal, window, document, undefined) {
//Configure colorbox call back to resize with custom dimensions 
  $.colorbox.settings.onLoad = function() {
    colorboxResize();
  }
   
  //Customize colorbox dimensions
  var colorboxResize = function(resize) {
    var width = "90%";
    var height = "90%";
    
    if($(window).width() > 960) { width = "860" }
    if($(window).height() > 700) { height = "630" } 
   
    $.colorbox.settings.height = height;
    $.colorbox.settings.width = width;
    
    //if window is resized while lightbox open
    if(resize) {
      $.colorbox.resize({
        'height': height,
        'width': width
      });
    } 
  }
  
  //In case of window being resized
  $(window).resize(function() {
    colorboxResize(true);
  });
})(jQuery, Drupal, this, this.document);

jQuery.noConflict();
jQuery(function() {
    jQuery('#a[href*=#]:not([href=#])').click(function() {
        if (location.pathname.replace(/^\//,'') == this.pathname.replace(/^\//,'') && location.hostname == this.hostname) {
            var target = jQuery(this.hash);
            target = target.length ? target : jQuery('[name=' + this.hash.slice(1) +']');
            if (target.length) {
                jQuery('html,body').animate({
                    scrollTop: target.offset().top
                }, 1000);
                return false;
            }
        }
    });
});

