<?php

/**
 * Implementation of ds layouts
 */

function ds_mnn_theme_ds_teaser_grid() {
  return array(
    'label' => t('CM theme: Teaser Display as a Grid'),
    'regions'     => array(
      'wrapper' => t('Content Wrapper')
    ),
    // Add this line if there is a default css file.
    'css' => TRUE,
    // Add this line if you're using DS 2.x for icon preview
    'image' => TRUE,
  );
}
