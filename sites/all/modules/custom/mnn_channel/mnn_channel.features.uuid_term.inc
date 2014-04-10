<?php
/**
 * @file
 * mnn_channel.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function mnn_channel_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Community Channel',
    'description' => 'Stay up-to-date on local elections, New York politics, and community issues with our Community channel.',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2e0d0324-9e6c-4587-ba50-669fdd924689',
    'vocabulary_machine_name' => 'channel',
    'field_channel_embed' => array(
      'und' => array(
        0 => array(
          'value' => '<p><iframe frameborder="0" height="450" scrolling="no" src="http://new.livestream.com/accounts/6480540/events/2616259/player?width=620&amp;height=450&amp;autoPlay=true&amp;mute=false" width="620"></iframe></p>',
          'format' => 'full_html',
          'safe_value' => '<p><iframe frameborder="0" height="450" scrolling="no" src="http://new.livestream.com/accounts/6480540/events/2616259/player?width=620&amp;height=450&amp;autoPlay=true&amp;mute=false" width="620"></iframe></p>
',
        ),
      ),
    ),
    'field_channel_id' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_channel_logo' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'uid' => 1,
          'filename' => 'screen_shot_2014-04-09_at_8.14.08_pm.png',
          'uri' => 'public://screen_shot_2014-04-09_at_8.14.08_pm.png',
          'filemime' => 'image/png',
          'filesize' => 70255,
          'status' => 1,
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '9921d6ed-a0d5-4640-b683-99dd1505efa0',
          'field_file_image_alt_text' => array(),
          'field_file_image_title_text' => array(),
          'rdf_mapping' => array(),
          'metadata' => array(
            'height' => 778,
            'width' => 848,
          ),
          'alt' => '',
          'title' => '',
          'width' => 848,
          'height' => 778,
          'uuid_features_file_path' => 'public://screen_shot_2014-04-09_at_8.14.08_pm.png',
        ),
      ),
    ),
    'field_channel_where_to_watch' => array(
      'und' => array(
        0 => array(
          'first' => 'TWC',
          'second' => 34,
        ),
        1 => array(
          'first' => 'RCN',
          'second' => 82,
        ),
        2 => array(
          'first' => 'FiOS',
          'second' => 33,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Spirit Channel',
    'description' => 'Our Spirit channel broadcasts varied religious and philosophical services, lectures, and discussions for all faiths and worldviews.',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '37d88f4f-6e0b-4b53-b802-d3ee547d4ca6',
    'vocabulary_machine_name' => 'channel',
    'field_channel_embed' => array(
      'und' => array(
        0 => array(
          'value' => '<p><iframe frameborder="0" height="360" scrolling="no" src="http://new.livestream.com/accounts/6312590/events/2611503/player?width=640&amp;height=360&amp;autoPlay=false&amp;mute=false" width="640"></iframe></p>',
          'format' => 'full_html',
          'safe_value' => '<p><iframe frameborder="0" height="360" scrolling="no" src="http://new.livestream.com/accounts/6312590/events/2611503/player?width=640&amp;height=360&amp;autoPlay=false&amp;mute=false" width="640"></iframe></p>
',
        ),
      ),
    ),
    'field_channel_id' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_channel_logo' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'uid' => 1,
          'filename' => 'screen_shot_2014-04-09_at_8.14.08_pm.png',
          'uri' => 'public://screen_shot_2014-04-09_at_8.14.08_pm.png',
          'filemime' => 'image/png',
          'filesize' => 70255,
          'status' => 1,
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '9921d6ed-a0d5-4640-b683-99dd1505efa0',
          'field_file_image_alt_text' => array(),
          'field_file_image_title_text' => array(),
          'rdf_mapping' => array(),
          'metadata' => array(
            'height' => 778,
            'width' => 848,
          ),
          'alt' => NULL,
          'title' => NULL,
          'width' => 848,
          'height' => 778,
          'uuid_features_file_path' => 'public://screen_shot_2014-04-09_at_8.14.08_pm.png',
        ),
      ),
    ),
    'field_channel_where_to_watch' => array(
      'und' => array(
        0 => array(
          'first' => 'TWC',
          'second' => 57,
        ),
        1 => array(
          'first' => 'RCN',
          'second' => 84,
        ),
        2 => array(
          'first' => 'FiOS',
          'second' => 35,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Lifestyle Channel',
    'description' => 'Exercise your mind, body, and palate with entertainment and lifestyle programming for New Yorkers with interests as diverse as our city.',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6ef4e31d-7b5a-4dec-9d10-8a47d3a8afd3',
    'vocabulary_machine_name' => 'channel',
    'field_channel_embed' => array(
      'und' => array(
        0 => array(
          'value' => '<p><iframe frameborder="0" height="450" scrolling="no" src="http://new.livestream.com/accounts/6478976/events/2616018/player?width=620&amp;height=450&amp;autoPlay=false&amp;mute=false" width="620"></iframe></p>',
          'format' => 'full_html',
          'safe_value' => '<p><iframe frameborder="0" height="450" scrolling="no" src="http://new.livestream.com/accounts/6478976/events/2616018/player?width=620&amp;height=450&amp;autoPlay=false&amp;mute=false" width="620"></iframe></p>
',
        ),
      ),
    ),
    'field_channel_id' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_channel_logo' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'uid' => 1,
          'filename' => 'screen_shot_2014-04-09_at_8.14.08_pm.png',
          'uri' => 'public://screen_shot_2014-04-09_at_8.14.08_pm.png',
          'filemime' => 'image/png',
          'filesize' => 70255,
          'status' => 1,
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '9921d6ed-a0d5-4640-b683-99dd1505efa0',
          'field_file_image_alt_text' => array(),
          'field_file_image_title_text' => array(),
          'rdf_mapping' => array(),
          'metadata' => array(
            'height' => 778,
            'width' => 848,
          ),
          'alt' => NULL,
          'title' => NULL,
          'width' => 848,
          'height' => 778,
          'uuid_features_file_path' => 'public://screen_shot_2014-04-09_at_8.14.08_pm.png',
        ),
      ),
    ),
    'field_channel_where_to_watch' => array(
      'und' => array(
        0 => array(
          'first' => 'TWC',
          'second' => 56,
        ),
        1 => array(
          'first' => 'RCN',
          'second' => 83,
        ),
        2 => array(
          'first' => 'FiOS',
          'second' => 34,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Culture Channel',
    'description' => 'Multi-lingual programming that covers the arts, politics, and global news for all of Manhattan’s diverse communities.',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '73911ba6-0a70-4beb-af93-9f420a9af7d7',
    'vocabulary_machine_name' => 'channel',
    'field_channel_embed' => array(
      'und' => array(
        0 => array(
          'value' => '<p><iframe frameborder="0" height="450" scrolling="no" src="http://new.livestream.com/accounts/6478935/events/2616010/player?width=620&amp;height=450&amp;autoPlay=fase&amp;mute=false" width="620"></iframe></p>',
          'format' => 'full_html',
          'safe_value' => '<p><iframe frameborder="0" height="450" scrolling="no" src="http://new.livestream.com/accounts/6478935/events/2616010/player?width=620&amp;height=450&amp;autoPlay=fase&amp;mute=false" width="620"></iframe></p>
',
        ),
      ),
    ),
    'field_channel_id' => array(
      'und' => array(
        0 => array(
          'value' => 4,
        ),
      ),
    ),
    'field_channel_logo' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'uid' => 1,
          'filename' => 'screen_shot_2014-04-09_at_8.14.08_pm.png',
          'uri' => 'public://screen_shot_2014-04-09_at_8.14.08_pm.png',
          'filemime' => 'image/png',
          'filesize' => 70255,
          'status' => 1,
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '9921d6ed-a0d5-4640-b683-99dd1505efa0',
          'field_file_image_alt_text' => array(),
          'field_file_image_title_text' => array(),
          'rdf_mapping' => array(),
          'metadata' => array(
            'height' => 778,
            'width' => 848,
          ),
          'alt' => NULL,
          'title' => NULL,
          'width' => 848,
          'height' => 778,
          'uuid_features_file_path' => 'public://screen_shot_2014-04-09_at_8.14.08_pm.png',
        ),
      ),
    ),
    'field_channel_where_to_watch' => array(
      'und' => array(
        0 => array(
          'first' => 'TWC',
          'second' => 67,
        ),
        1 => array(
          'first' => 'RCN',
          'second' => 85,
        ),
        2 => array(
          'first' => 'FiOS',
          'second' => 36,
        ),
      ),
    ),
  );
  return $terms;
}
