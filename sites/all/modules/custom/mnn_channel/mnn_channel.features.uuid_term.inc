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
          'value' => '<div class="channel-embeds"><div class="video"><iframe frameborder="0" height="450" scrolling="no" src="http://new.livestream.com/accounts/6480540/events/2616259/player?width=620&amp;height=450&amp;autoPlay=true&amp;mute=false" width="620"></iframe></div><div class="chat"><iframe allowtransparency="true" frameborder="0" height="450" marginheight="0" marginwidth="0" scrolling="no" src="http://chatroll.com/embed/chat/mnn1?id=EdZB_sVoFr-&amp;platform=html&amp;w=$0" width="300"></iframe></div></div>
',
          'format' => 'full_html',
          'safe_value' => '<div class="channel-embeds">
<div class="video">
<iframe frameborder="0" height="450" scrolling="no" src="http://new.livestream.com/accounts/6480540/events/2616259/player?width=620&amp;height=450&amp;autoPlay=true&amp;mute=false" width="620"></iframe></div>
<div class="chat">
<iframe allowtransparency="true" frameborder="0" height="450" marginheight="0" marginwidth="0" scrolling="no" src="http://chatroll.com/embed/chat/mnn1?id=EdZB_sVoFr-&amp;platform=html&amp;w=$0" width="300"></iframe></div>
</div>
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
          'uid' => '428d08e7-3462-4cd4-806f-c636ba71e2ca',
          'filename' => 'mnn_mini_channel_1.png',
          'uri' => 'public://mnn_mini_channel_1.png',
          'filemime' => 'image/png',
          'filesize' => 7716,
          'status' => 1,
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '12f911b6-7454-4f39-b24a-2da4c7366e64',
          'field_file_image_alt_text' => array(
            'und' => array(
              0 => array(
                'value' => 'Channel 1',
                'format' => NULL,
                'safe_value' => 'Channel 1',
              ),
            ),
          ),
          'field_file_image_title_text' => array(
            'und' => array(
              0 => array(
                'value' => 'Channel 1',
                'format' => NULL,
                'safe_value' => 'Channel 1',
              ),
            ),
          ),
          'rdf_mapping' => array(),
          'metadata' => array(
            'height' => 360,
            'width' => 360,
          ),
          'alt' => 'Channel 1',
          'title' => 'Channel 1',
          'width' => 360,
          'height' => 360,
          'uuid_features_file_path' => 'public://mnn_mini_channel_1.png',
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
          'value' => '<div class="channel-embeds">
	<div class="video"><iframe frameborder="0" height="450" scrolling="no" src="http://new.livestream.com/accounts/6312590/events/2611503/player?width=640&amp;height=360&amp;autoPlay=false&amp;mute=false" width="620"></iframe></div>
	<div class="chat"><iframe allowtransparency="true" frameborder="0" height="450" marginheight="0" marginwidth="0" scrolling="no" src="http://chatroll.com/embed/chat/mnn3?id=y_fEp0ciCe8&amp;platform=html&amp;w=$0" width="300"></iframe></div>
</div>
',
          'format' => 'full_html',
          'safe_value' => '<div class="channel-embeds">
<div class="video">
<iframe frameborder="0" height="450" scrolling="no" src="http://new.livestream.com/accounts/6312590/events/2611503/player?width=640&amp;height=360&amp;autoPlay=false&amp;mute=false" width="620"></iframe></div>
<div class="chat">
<iframe allowtransparency="true" frameborder="0" height="450" marginheight="0" marginwidth="0" scrolling="no" src="http://chatroll.com/embed/chat/mnn3?id=y_fEp0ciCe8&amp;platform=html&amp;w=$0" width="300"></iframe></div>
</div>
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
          'uid' => '428d08e7-3462-4cd4-806f-c636ba71e2ca',
          'filename' => 'mnn_mini_channel_3.png',
          'uri' => 'public://mnn_mini_channel_3.png',
          'filemime' => 'image/png',
          'filesize' => 9620,
          'status' => 1,
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '54f8b7e9-587b-4fbf-b7c9-40e7ff9d4485',
          'field_file_image_alt_text' => array(
            'und' => array(
              0 => array(
                'value' => 'Channel 3',
                'format' => NULL,
                'safe_value' => 'Channel 3',
              ),
            ),
          ),
          'field_file_image_title_text' => array(
            'und' => array(
              0 => array(
                'value' => 'Channel 3',
                'format' => NULL,
                'safe_value' => 'Channel 3',
              ),
            ),
          ),
          'rdf_mapping' => array(),
          'metadata' => array(
            'height' => 360,
            'width' => 360,
          ),
          'alt' => 'Channel 3',
          'title' => 'Channel 3',
          'width' => 360,
          'height' => 360,
          'uuid_features_file_path' => 'public://mnn_mini_channel_3.png',
        ),
      ),
    ),
    'field_channel_where_to_watch' => array(
      'und' => array(
        0 => array(
          'first' => 'TWC',
          'second' => 1997,
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
          'value' => '<div class="channel-embeds">
	<div class="video"><iframe frameborder="0" height="450" scrolling="no" src="http://new.livestream.com/accounts/6478976/events/2616018/player?width=620&amp;height=450&amp;autoPlay=false&amp;mute=false" width="620"></iframe></div>
	<div class="chat"><iframe width="300" height="450" frameborder="0" scrolling="no" marginheight="0" marginwidth="0" allowtransparency="true" src="http://chatroll.com/embed/chat/mnn-2?id=QFx8fVXzmXk&amp;platform=html&amp;w=$0"></iframe></div>
</div>',
          'format' => 'full_html',
          'safe_value' => '<div class="channel-embeds">
<div class="video">
<iframe frameborder="0" height="450" scrolling="no" src="http://new.livestream.com/accounts/6478976/events/2616018/player?width=620&amp;height=450&amp;autoPlay=false&amp;mute=false" width="620"></iframe></div>
<div class="chat">
<iframe width="300" height="450" frameborder="0" scrolling="no" marginheight="0" marginwidth="0" allowtransparency="true" src="http://chatroll.com/embed/chat/mnn-2?id=QFx8fVXzmXk&amp;platform=html&amp;w=$0"></iframe></div>
</div>
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
          'uid' => '428d08e7-3462-4cd4-806f-c636ba71e2ca',
          'filename' => 'mnn_mini_channel_2.png',
          'uri' => 'public://mnn_mini_channel_2.png',
          'filemime' => 'image/png',
          'filesize' => 8757,
          'status' => 1,
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => 'cde5e06f-7fd9-4849-8e45-02b73e083de3',
          'field_file_image_alt_text' => array(
            'und' => array(
              0 => array(
                'value' => 'Channel 2',
                'format' => NULL,
                'safe_value' => 'Channel 2',
              ),
            ),
          ),
          'field_file_image_title_text' => array(
            'und' => array(
              0 => array(
                'value' => 'Channel 2',
                'format' => NULL,
                'safe_value' => 'Channel 2',
              ),
            ),
          ),
          'rdf_mapping' => array(),
          'metadata' => array(
            'height' => 360,
            'width' => 360,
          ),
          'alt' => 'Channel 2',
          'title' => 'Channel 2',
          'width' => 360,
          'height' => 360,
          'uuid_features_file_path' => 'public://mnn_mini_channel_2.png',
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
          'value' => '<div class="channel-embeds">
	<div class="video"><iframe frameborder="0" height="450" scrolling="no" src="http://new.livestream.com/accounts/6478935/events/2616010/player?width=620&amp;height=450&amp;autoPlay=fase&amp;mute=false" width="620"></iframe></div>
	<div class="chat"><iframe width="300" height="450" frameborder="0" scrolling="no" marginheight="0" marginwidth="0" allowtransparency="true" src="http://chatroll.com/embed/chat/mnn4?id=wJgqo7IsMoQ&amp;platform=html&amp;w=$0"></iframe>
</div>
</div>
',
          'format' => 'full_html',
          'safe_value' => '<div class="channel-embeds">
<div class="video">
<iframe frameborder="0" height="450" scrolling="no" src="http://new.livestream.com/accounts/6478935/events/2616010/player?width=620&amp;height=450&amp;autoPlay=fase&amp;mute=false" width="620"></iframe></div>
<div class="chat">
<iframe width="300" height="450" frameborder="0" scrolling="no" marginheight="0" marginwidth="0" allowtransparency="true" src="http://chatroll.com/embed/chat/mnn4?id=wJgqo7IsMoQ&amp;platform=html&amp;w=$0"></iframe></div>
</div>
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
          'uid' => '428d08e7-3462-4cd4-806f-c636ba71e2ca',
          'filename' => 'mnn_mini_channel_4.png',
          'uri' => 'public://mnn_mini_channel_4.png',
          'filemime' => 'image/png',
          'filesize' => 7720,
          'status' => 1,
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '25930a65-b579-4636-82a2-7264566acba2',
          'field_file_image_alt_text' => array(
            'und' => array(
              0 => array(
                'value' => 'Channel 4',
                'format' => NULL,
                'safe_value' => 'Channel 4',
              ),
            ),
          ),
          'field_file_image_title_text' => array(
            'und' => array(
              0 => array(
                'value' => 'Channel 4',
                'format' => NULL,
                'safe_value' => 'Channel 4',
              ),
            ),
          ),
          'rdf_mapping' => array(),
          'metadata' => array(
            'height' => 360,
            'width' => 360,
          ),
          'alt' => 'Channel 4',
          'title' => 'Channel 4',
          'width' => 360,
          'height' => 360,
          'uuid_features_file_path' => 'public://mnn_mini_channel_4.png',
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
