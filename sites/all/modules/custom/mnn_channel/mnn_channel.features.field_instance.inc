<?php
/**
 * @file
 * mnn_channel.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function mnn_channel_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-channel-field_channel_embed'
  $field_instances['taxonomy_term-channel-field_channel_embed'] = array(
    'bundle' => 'channel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The HTML embed code for viewing the channel\'s live feed or perhaps just a promotional video.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_channel_embed',
    'label' => 'Channel Embed',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 0,
          'full_html' => 'full_html',
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'taxonomy_term-channel-field_channel_id'
  $field_instances['taxonomy_term-channel-field_channel_id'] = array(
    'bundle' => 'channel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This should be the short, unique id of the channel (perhaps it\'s call-sign). This is used for api calls as well so it shouldn\'t be changed once it\'s set.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_channel_id',
    'label' => 'Channel ID',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'machine_name',
      'settings' => array(
        'size' => 128,
      ),
      'type' => 'machine_name_default',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-channel-field_channel_logo'
  $field_instances['taxonomy_term-channel-field_channel_logo'] = array(
    'bundle' => 'channel',
    'deleted' => 0,
    'description' => 'This is the channel logo, this image will be resized to fit.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'thumbnail',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_channel_logo',
    'label' => 'Channel Logo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'taxonomy_term-channel-field_channel_where_to_watch'
  $field_instances['taxonomy_term-channel-field_channel_where_to_watch'] = array(
    'bundle' => 'channel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'List the television providers/locations and then the local channel number where this channel can be viewed. You can add multiple entries if it\'s available in more than one location or on more than one provider. <i>Example: FIOS 123</i>',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'double_field',
        'settings' => array(
          'first' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => ':&nbsp;',
          ),
          'second' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => '',
          ),
          'style' => 'inline',
        ),
        'type' => 'double_field_unformatted_list',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_channel_where_to_watch',
    'label' => 'Where to watch',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'double_field',
      'settings' => array(
        'first' => array(
          'general' => array(
            'prefix' => '',
            'required' => 1,
            'suffix' => '',
          ),
          'textfield' => array(
            'placeholder' => '',
            'size' => 10,
          ),
        ),
        'inline' => 1,
        'second' => array(
          'general' => array(
            'prefix' => '',
            'required' => 1,
            'suffix' => '',
          ),
          'textfield' => array(
            'placeholder' => '',
            'size' => 10,
          ),
        ),
      ),
      'type' => 'textfield_&_textfield',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Channel Embed');
  t('Channel ID');
  t('Channel Logo');
  t('List the television providers/locations and then the local channel number where this channel can be viewed. You can add multiple entries if it\'s available in more than one location or on more than one provider. <i>Example: FIOS 123</i>');
  t('The HTML embed code for viewing the channel\'s live feed or perhaps just a promotional video.');
  t('This is the channel logo, this image will be resized to fit.');
  t('This should be the short, unique id of the channel (perhaps it\'s call-sign). This is used for api calls as well so it shouldn\'t be changed once it\'s set.');
  t('Where to watch');

  return $field_instances;
}
