<?php

ctools_include('cleanstring', 'ctools', 'includes');

/**
 * Get the channels (tv stations).
 */
function mnns_how_get_channels(){
  // check for cached channels
  if ($cached = cache_get('mnn_show:channels', 'cache')) {
    return $cached->data;
  }

  $channels = array();

  $result = db_query("SELECT nid FROM {node} WHERE type = 'channel_info'");
  while($row = db_fetch_object($result)) {
    $channel_info = node_load($row->nid); // drupal content type
    $tv_ch = array();
    foreach ($channel_info->field_television_channel as $tv_ch_nid){
      $television_channel = node_load($tv_ch_nid['nid']); // drupal content type
      $television_station = node_load($television_channel->field_television_station[0]['nid']); // drupal content type
      $tv_ch[] = array(
        'tvStationName' => $television_station->title,
        'tvStationChannel' => $television_channel->field_channel_number[0]['value']
      );
    }
    // sort the tv stations
    foreach ($tv_ch as $key => $value){
      $station_name[$key] = $value['tvStationName'];
    }
    array_multisort($station_name, SORT_DESC, $tv_ch);

    $channels[$channel_info->field_number[0]['value']] = array(
      'name' => $channel_info->title,
      'description' => $channel_info->body,
      'watchLiveUrl' => drupal_get_path_alias('node/'.$channel_info->field_watch_live_link[0]['nid']),
      'tvChannels' => $tv_ch
    );
  }

  // store in cache with a minimum expiration time of 1 day
  cache_set('mnn_show:channels', $channels, 'cache', time() + (60 * 60 * 24));
  return $channels;
}

/**
 * Check if a date is within a range.
 */
function mnn_show_is_date_in_range($start_date, $end_date, $date) {
  // assume DateTime object
  return (($date >= $start_date) && ($date <= $end_date));
}