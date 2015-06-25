
(function ($) {
  Drupal.behaviors.MYMODULE = {
    attach: function (context, settings) {
      $("#theme-menu li a").hover(function() {
          $(this).stop().animate({
              width: "200px",
              height: "200px",
              padding: "80px 0",
              //lineHeight: "180px" /*keep text aligned in center*/
          }, 400);
      }, function() {
          $(this).stop().animate({
              width: "175px",
              height: "175px",
              padding: "65px 0",
              //lineHeight: "150px"
          }, 800);
      }); 
    }
  };
}(jQuery));