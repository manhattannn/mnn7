<?php
/**
 * @file
 * cm_slideshow.flexslider_default_preset.inc
 */

/**
 * Implements hook_flexslider_default_presets().
 */
function cm_slideshow_flexslider_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'cm_slideshow';
  $preset->title = 'cm_slideshow';
  $preset->theme = 'classic';
  $preset->imagestyle_normal = 'flexslider_full';
  $preset->imagestyle_thumbnail = 'flexslider_thumbnail';
  $preset->options = array(
    'animation' => 'fade',
    'animationDuration' => 600,
    'slideDirection' => 'horizontal',
    'slideshow' => 1,
    'slideshowSpeed' => 7000,
    'animationLoop' => 1,
    'randomize' => 0,
    'slideToStart' => 2000,
    'directionNav' => 1,
    'controlNav' => 1,
    'keyboardNav' => 1,
    'mousewheel' => 1,
    'prevText' => '<',
    'nextText' => '>',
    'pausePlay' => 0,
    'pauseText' => 'Pause',
    'playText' => 'Play',
    'pauseOnAction' => 1,
    'controlsContainer' => '',
    'manualControls' => '#tabs-nav li img',
  );
  $export['cm_slideshow'] = $preset;

  return $export;
}
