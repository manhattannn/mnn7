<?php
/**
 * Implements hook_form_system_theme_settings_alter().
 *
 * @param $form
 *   Nested array of form elements that comprise the form.
 * @param $form_state
 *   A keyed array containing the current state of the form.
 */
function mnn_theme_form_system_theme_settings_alter(&$form, &$form_state, $form_id = NULL)  {
  // Work-around for a core bug affecting admin themes. See issue #943212.
  if (isset($form_id)) {
    return;
  }
  $form['mnn_theme_options'] = array(
    '#type'          => 'fieldset',
    '#title'         => t('CM Theme Additional Options'),
  );
  $form['mnn_theme_options']['user_menu'] = array(
    '#type'          => 'checkbox',
    '#title'         => t('Add User Menu to Header (Log In, Log Out etc).'),
    '#description'   => t('Disable to use the block system'),
    '#default_value' => theme_get_setting('user_menu'),
  );
  $form['mnn_theme_options']['sticky_footer'] = array(
    '#type'          => 'checkbox',
    '#title'         => t('Add sticky footer.'),
    '#description'   => t('More info about sticky footer <a href="http://www.cssstickyfooter.com/" target="_blank">here</a><br />
      You can change these settings in the the sticky-footer.css file located in the css folder.'),
    '#default_value' => theme_get_setting('sticky_footer'),
  );

  // Create the form using Forms API: http://api.drupal.org/api/7

  /* -- Delete this line if you want to use this setting
  $form['STARTERKIT_example'] = array(
    '#type'          => 'checkbox',
    '#title'         => t('STARTERKIT sample setting'),
    '#default_value' => theme_get_setting('STARTERKIT_example'),
    '#description'   => t("This option doesn't do anything; it's just an example."),
  );
  // */

  // Remove some of the base theme's settings.
  /* -- Delete this line if you want to turn off this setting.
  unset($form['themedev']['zen_wireframes']); // We don't need to toggle wireframes on this site.
  // */

  // We are editing the $form in place, so we don't need to return anything.
}
