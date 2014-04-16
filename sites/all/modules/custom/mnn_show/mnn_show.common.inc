<?php

ctools_include('cleanstring', 'ctools', 'includes');

/**
 * Get the channels (tv stations).
 */
function mnn_show_get_channels(){
  // check for cached channels
  if ($cached = cache_get('mnn_show:channels', 'cache')) {
   // return $cached->data;
  }

  $channels = array();

  $channel_vocab = taxonomy_vocabulary_machine_name_load("channel");
  $channel_terms = taxonomy_get_tree($channel_vocab->vid, 0, 1, TRUE);
  foreach($channel_terms as $channel) {
    $tv_ch = array();
    $ch_wrapper = entity_metadata_wrapper('taxonomy_term', $channel);
    foreach ($ch_wrapper->field_channel_where_to_watch as $watch){
      $tv_ch[] = array(
        'tvStationName' => $watch->first->value(),
        'tvStationChannel' => $watch->second->value(),
      );
    }
    $channels[$ch_wrapper->field_channel_id->value()] = array(
      'name' => $ch_wrapper->name->value(),
      'description' => $ch_wrapper->description->value(),
      'watchLiveUrl' => $ch_wrapper->url->value(),
      'tvChannels' => $tv_ch
    );
  }
  // store in cache with a minimum expiration time of 1 day
  // cache_set('mnn_show:channels', $channels, 'cache', time() + (60 * 60 * 24));
  return $channels;
}

/**
 * Check if a date is within a range.
 */
function mnn_show_is_date_in_range($start_date, $end_date, $date) {
  // assume DateTime object
  return (($date >= $start_date) && ($date <= $end_date));
}
