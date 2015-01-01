<?php

/**
 * @file
 * template.php
 */

function bootstrap_toolkit_preprocess_field(&$variables) {

  // Add 'img-responsive' class to header images.
  if($variables['element']['#field_name'] == 'field_header_image'){
    foreach($variables['items'] as $key => $item){
      $variables['items'][ $key ]['#item']['attributes']['class'][] = 'img-responsive'; 
    }
  }

  //Make age range and program duration bootstrap buttons.
  if($variables['element']['#field_name'] == 'field_age_range'){
    foreach($variables['items'] as $key => $item){
      $variables['items'][ $key ]['#options']['attributes']['class'] = 'btn btn-primary'; 
      $variables['items'][ $key ]['#options']['attributes']['role'] = 'button';  
    }
  }

  if($variables['element']['#field_name'] == 'field_program_duration'){
    foreach($variables['items'] as $key => $item){
      $variables['items'][ $key ]['#options']['attributes']['class'] = 'btn btn-primary'; 
      $variables['items'][ $key ]['#options']['attributes']['role'] = 'button';  
    }
  }
    
  //Add glyphicons as "bullets" to core learning field.
  if($variables['element']['#field_name'] == 'field_core_learnings'){
    foreach($variables['items'] as $key => $item){
      $variables['items'][ $key ]['#prefix'] = '<span class="glyphicon glyphicon-ok-sign" aria-hidden="true"></span>';
    }
  }
  
  //Add glyphicons as "bullets" to key question field.  
  if($variables['element']['#field_name'] == 'field_key_questions'){
    foreach($variables['items'] as $key => $item){
      $variables['items'][ $key ]['#prefix'] = '<span class="glyphicon glyphicon-question-sign" aria-hidden="true"></span>';
    }
  }

  //Add glyphicons as "bullets" to discussion guide field.  
  if($variables['element']['#field_name'] == 'field_discussion_guide'){
    foreach($variables['items'] as $key => $item){
      $variables['items'][ $key ]['#prefix'] = '<span class="glyphicon glyphicon-paperclip" aria-hidden="true"></span>';
    }
  }
  
  //Add glyphicons as "bullets" to background resources and supporting resources depending on the resource type.
  if($variables['element']['#field_name'] == 'field_background_resource') {
      $node = menu_get_object();
      $wrapper = entity_metadata_wrapper('node', $node->nid);

    foreach($variables['items'] as $key => $item){
      $term_wrapper = entity_metadata_wrapper('taxonomy_term', $wrapper->field_background_resource[$key]->field_resource_type[0]->tid->value());
      $variables['items'][ $key ]['#prefix'] = '<span class="glyphicon ' . $term_wrapper->field_resource_glyphicon->value() .'" aria-hidden="true"></span>';
    }
  }
  
  if($variables['element']['#field_name'] == 'field_supporting_materials'){
      $node = menu_get_object();
      $wrapper = entity_metadata_wrapper('node', $node->nid);

    foreach($variables['items'] as $key => $item){
      $term_wrapper = entity_metadata_wrapper('taxonomy_term', $wrapper->field_supporting_materials[$key]->field_resource_type[0]->tid->value());
      $variables['items'][ $key ]['#prefix'] = '<span class="glyphicon ' . $term_wrapper->field_resource_glyphicon->value() .'" aria-hidden="true"></span>';
    }
  }
}
