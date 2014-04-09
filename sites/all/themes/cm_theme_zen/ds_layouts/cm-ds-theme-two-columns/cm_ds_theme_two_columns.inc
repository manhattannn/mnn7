<?php

/**
 * Implementation of ds layouts
 */

function ds_cm_ds_theme_two_columns() {
  return array(
    'label' => t('CM theme: Two columns with top and bottom rows'),
    'regions'     => array(
      'top' => t('Top Row'),
      'center' => t('Center Row'),
      'left' => t('Left side'),
      'right' => t('Right side'),
      'bottom' => t('Bottom')
    ),
    // Add this line if there is a default css file.
    'css' => TRUE,
    // Add this line if you're using DS 2.x for icon preview
    'image' => TRUE,
  );
}
