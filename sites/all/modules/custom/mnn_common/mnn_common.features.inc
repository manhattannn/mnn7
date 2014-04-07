<?php
/**
 * @file
 * mnn_common.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mnn_common_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function mnn_common_image_default_styles() {
  $styles = array();

  // Exported image style: teaser.
  $styles['teaser'] = array(
    'name' => 'teaser',
    'label' => 'Teaser',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: teaser_breakpoints_theme_cm_theme_zen_medium_1x.
  $styles['teaser_breakpoints_theme_cm_theme_zen_medium_1x'] = array(
    'name' => 'teaser_breakpoints_theme_cm_theme_zen_medium_1x',
    'label' => 'teaser_breakpoints_theme_cm_theme_zen_medium_1x',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 450,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: teaser_breakpoints_theme_cm_theme_zen_narrow_1x.
  $styles['teaser_breakpoints_theme_cm_theme_zen_narrow_1x'] = array(
    'name' => 'teaser_breakpoints_theme_cm_theme_zen_narrow_1x',
    'label' => 'teaser_breakpoints_theme_cm_theme_zen_narrow_1x',
    'effects' => array(
      2 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 320,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
