<?php

function mnn_schedule_page() {

  $module_dir = drupal_get_path('module', 'mnn_schedule');
  $dist_dir = $module_dir . '/app/dist';
  $css_dir = $dist_dir .'/styles';
  $files = scandir($css_dir);
  //@todo put css into a drupal specific file instead of loading like this.
  foreach ($files as $file) {
    $file_parts = pathinfo($css_dir . $file);
    // if(isset($file_parts['extension']) && $file_parts['extension'] == 'css') {
    //   dpm($file_parts, "Here is some css we're loading from the angular app, you might want to pick and choose what to keep and then create a specific css for this module or the theme, Alban.");
    //   drupal_add_css($css_dir ."/". $file);
    // }
  }

  $app_dir = $module_dir .'/app/app/';
  $scripts = array(
    'bower_components/angular/angular.js',
    'bower_components/angular-loader/angular-loader.js',
    'bower_components/angular-resource/angular-resource.js',
    'bower_components/angular-cookies/angular-cookies.js',
    'bower_components/angular-sanitize/angular-sanitize.js',
    'bower_components/angular-bootstrap/ui-bootstrap-tpls.js',
  );
  $scripts = array_merge($scripts, array(
    'scripts/app.js',
    'scripts/controllers/cmschedule.js',
    'scripts/services/cmschedule.js',
  ));

  foreach($scripts as $library) {
    //dpm($library);
    drupal_add_js($app_dir . $library, array('scope' => 'footer'));
  }

  $views_dir = $app_dir .'views';
  $output = '<div ng-app="cmScheduleApp">';
  $output .= file_get_contents($views_dir . "/main.html");
  $output .= '</div>';


  return $output;
}
