<?php
/**
 * @file
 * cm_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cm_slideshow_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "linkit" && $api == "linkit_profiles") {
    return array("version" => "1");
  }
  if ($module == "resp_img" && $api == "default_resp_img_suffixs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cm_slideshow_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function cm_slideshow_image_default_styles() {
  $styles = array();

  // Exported image style: cm_slideshow_mobile.
  $styles['cm_slideshow_mobile'] = array(
    'name' => 'cm_slideshow_mobile',
    'effects' => array(
      15 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 360,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'cm_slideshow_mobile',
  );

  // Exported image style: cm_slideshow_narrow.
  $styles['cm_slideshow_narrow'] = array(
    'name' => 'cm_slideshow_narrow',
    'effects' => array(
      16 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 720,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'cm_slideshow_narrow',
  );

  // Exported image style: cm_slideshow_normal.
  $styles['cm_slideshow_normal'] = array(
    'name' => 'cm_slideshow_normal',
    'effects' => array(
      13 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 960,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'cm_slideshow_normal',
  );

  // Exported image style: cm_slideshow_wide.
  $styles['cm_slideshow_wide'] = array(
    'name' => 'cm_slideshow_wide',
    'effects' => array(
      14 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 500,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'cm_slideshow_wide',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function cm_slideshow_node_info() {
  $items = array(
    'cm_slideshow_slide' => array(
      'name' => t('Slideshow Slide'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Headline'),
      'help' => '',
    ),
  );
  return $items;
}
