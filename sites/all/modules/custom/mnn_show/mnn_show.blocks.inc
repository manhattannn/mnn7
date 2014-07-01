<?php

ctools_include('mnn_show.common', 'mnn_show', '');
ctools_include('mnn_show.ycschedule', 'mnn_show', '');

/**
 * Watch Now block (horizontal bar).
 */
function mnn_show_block_watch_now(){
  drupal_add_js(drupal_get_path('module', 'mnn_show') . '/mnn_show_homepage.js');

  $content = "<div class='whats-on-now'>";
  $content .= "<h3>What's on Now</h3>";
  $content .= "<time>Retrieving data ...</time>";
  $content .= "<p class='view-sched'><a href='/schedule'>View Schedule</a></p>";
  $content .= "</div>";

  $channel_info = mnn_show_get_channels();
  $content .= "<ul>";
  foreach($channel_info as $channel_id => $channel_data) {
    $content .= '<li id="channel'.$channel_id.'"><div class="channel-info">';
    $content .= '<div class="channel-logo">' . $channel_data['logoHtml'] . '</div>';
    $content .= '<h4>'.$channel_data['name'].'</h4>';
    $content .= '<h5><a href="'.$channel_data['watchLiveUrl'].'"></h5>';
    $content .= '<p class="watch-now-link"><a href="'.$channel_data['watchLiveUrl'].'">Watch Now</a></p>';
    $content .= "<div class='channel-about'>";
    $content .= "<p class='channel-description'>".$channel_data['description']."</p>";
    $content .= "<ul class='cable-channel-list'>";
    foreach ($channel_data['tvChannels'] as $tvStation){
      $content .= '<li>'.$tvStation['tvStationName'].'<span class="cable-number"">'.$tvStation['tvStationChannel'].'</span></li>';
    }
    $content .= "</ul>";
    $content .= "</div>";
    $content .= "</div>";
    $content .= "</li>";
  }
  $content .= "</ul>";

  return $content;
}

/**
 * Channel Listing wrapper block for schedule.
 */
function mnn_show_block_geolocator_and_channel_listing(){
  $content = '<div class="col"><div class="locator"></div></div>';
  $content .= '<div class="col">';
  $content .= mnn_show_block_channel_listing();
  $content .= '</div>';
  return $content;
}

/**
 * Channel Listing block for schedule.
 */
function mnn_show_block_channel_listing(){
  $channel_info = mnn_show_get_channels();
  $content = '<table class="channel-grid">';
  // heading row
  $content .= '<tr><th></th>'; // first col is blank
  $firstRow = current($channel_info);
  for ($i = 0; $i < count($firstRow['tvChannels']); $i++){
    $content .= '<th>'.$firstRow['tvChannels'][$i]['tvStationName'].'</th>';
  }
  $content .= '</tr>';
  // channels
  foreach($channel_info as $channel_id => $channel_data)
  for ($i = 1; $i <= count($channel_info); $i++){
    $content .= '<tr>';
    $content .= '<th>'.$channel_id.' '.$channel_data['name'].'</th>';
    for ($j = 0; $j < count($channel_data['tvChannels']); $j++){
      $content .= '<td>'.$channel_data['tvChannels'][$j]['tvStationChannel'].'</td>';
    }
    $content .= '</tr>';
  }

  $content .= '</table>';
  return $content;
}

/**
 * YC Channel Listing block for YC schedule.
 */
function mnn_show_block_yc_channel_listing(){
  $channel_info = mnn_show_get_channels();

  //--- youth channel plays on channel 1 & 4

  $content = '<table class="channel-grid">';
  // heading row
  $content .= '<tr><th></th>'; // first col is blank
  for ($i = 0; $i < count($channel_info[1]['tvChannels']); $i++){
    $content .= '<th>'.$channel_info[1]['tvChannels'][$i]['tvStationName'].'</th>';
  }
  $content .= '</tr>';
  // channels
  for ($i = 1; $i <= count($channel_info); $i=$i+3){
    $content .= '<tr>';
    $content .= '<th>'.$i.' '.$channel_info[$i]['name'].'</th>';
    for ($j = 0; $j < count($channel_info[1]['tvChannels']); $j++){
      $content .= '<td>'.$channel_info[$i]['tvChannels'][$j]['tvStationChannel'].'</td>';
    }
    $content .= '</tr>';
  }

  $content .= '</table>';
  return $content;
}

/**
 * YC Channel Intro block for YC schedule.
 */
function mnn_show_block_yc_channel_intro(){
  $schedules = mnn_show_yc_schedules();

  $now = new DateTime(NULL, new DateTimeZone('America/New_York'));
  $day = intval($now->format('N')) - 1; // 0 = Monday, 6 = Sunday
  $content = '';

  foreach ($schedules as $schedule_num => $schedule) {
    foreach ($schedule as $item) {
      if ($item['day'] == $day) {
        $start = new DateTime($now->format('m/d/Y '. $item['start_time']), new DateTimeZone('America/New_York'));
        $end = new DateTime($now->format('m/d/Y '. $item['stop_time']), new DateTimeZone('America/New_York'));

        if (mnn_show_is_date_in_range($start, $end, $now)) {
          switch ($item['channel']) {
            case 1:
              $link = '/live/1-community-channel';
              break;

            case 2:
              $link = '/live/2-lifestyle-channel';
              break;

            case 3:
              $link = '/live/3-spirit-channel';
              break;

            case 4:
              $link = '/live/4-culture-channel';
              break;

            default:
              $link = '';
              break;
          }

          break 2;
        }
      }
    }
  }

  $content = '<p>Youth Channel broadcasts weekdays, from 4-5 PM on MNN1 and 5-6 on MNN4.</p>';
  if ($link != '') {
    $content .= '<p>Youth Channel is streaming right now. <a href="' . $link .'"">Click to watch online</a>.</p>';
  }
  else {
    $content .= '<p>Until Youth Channel broadcasts again, watch <a href="/youth-channel/video">our videos</a>.</p>';
  }

  return $content;
}

/**
 * YC Is Playing Now block for homepage.
 */
function mnn_show_block_yc_channel_is_playing_now(){
  $schedules = mnn_show_yc_schedules();

  $now = new DateTime(NULL, new DateTimeZone('America/New_York'));
  $day = intval($now->format('N')) - 1; // 0 = Monday, 6 = Sunday
  $content = '';

  foreach ($schedules as $schedule_num => $schedule) {
    foreach ($schedule as $item) {
      if ($item['day'] == $day) {
        $start = new DateTime($now->format('m/d/Y '. $item['start_time']), new DateTimeZone('America/New_York'));
        $end = new DateTime($now->format('m/d/Y '. $item['stop_time']), new DateTimeZone('America/New_York'));

        if (mnn_show_is_date_in_range($start, $end, $now)) {
          switch ($item['channel']) {
            case 1:
              $link = '/live/1-community-channel';
              break;

            case 2:
              $link = '/live/2-lifestyle-channel';
              break;

            case 3:
              $link = '/live/3-spirit-channel';
              break;

            case 4:
              $link = '/live/4-culture-channel';
              break;

            default:
              $link = '';
              break;
          }

          $content = '<p>Youth Channel is playing right now on MNN - <a href="' . $link . '">Watch Online Now!</a></p>';

          break 2;
        }
      }
    }
  }

  return $content;
}
