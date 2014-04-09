<?php

/**
 * Implementation of ds layouts
 */

function ds_cm_theme_ds_teaser() {
  return array(
    'label' => t('CM theme: Teaser Display'),
    'regions'     => array(
      'media' => t('Inline Media'),
      'wrapper' => t('Content Wrapper')
    ),
    // Add this line if there is a default css file.
    'css' => TRUE,
    // Add this line if you're using DS 2.x for icon preview
    'image' => TRUE,
  );
}
