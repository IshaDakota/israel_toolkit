<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php if (!$label_hidden): ?>
    <a class="collapsed" data-toggle="collapse" href="#collapse-supporting-materials"></span><div class="field-label"<?php print $title_attributes; ?>><span class="glyphicon glyphicon-plus-sign"></span>Resources Referenced</div></a>
  <?php endif; ?>
  <div id ="collapse-supporting-materials" class="collapse field-items"<?php print $content_attributes; ?>>
    <?php foreach ($items as $delta => $item): ?>
    <?php
      //get the numeral
      $itemNumeral = $delta+1;
      //give this item a class based on which item it is in the list
      $additionalClasses = 'item-' . $itemNumeral;
      // if this is the first item, give it the "first" class
      if ($itemNumeral == 1){
        $additionalClasses .= ' first';
      }
      // if this is the last item, give it the "last" class
      if ($itemNumeral == count($items)){
        $additionalClasses .= ' last';
      }      
    ?>
    <div class="field-item <?php print $additionalClasses?> <?php print $delta % 2 ? 'odd' : 'even'; ?>"<?php print $item_attributes[$delta]; ?>><?php print render($item); ?></div>
    <?php endforeach; ?>
  </div>
</div>