<?php

ctools_include('mnn_show.common', 'mnn_show', '');

/**
 * The channels/days/times that YC is on the air.
 */
function mnn_show_yc_schedules() {
  // schedule 1
  $schedules[0][] = array(
    'channel' => 1,
    'day' => 0, // monday
    'start_time' => '16:00:00', // 4pm
    'stop_time' => '16:59:59', // 5pm
  );
  $schedules[0][] = array(
    'channel' => 1,
    'day' => 1, // tuesday
    'start_time' => '16:00:00', // 4pm
    'stop_time' => '16:59:59', // 5pm
  );
  $schedules[0][] = array(
    'channel' => 1,
    'day' => 2, // wednesday
    'start_time' => '16:00:00', // 4pm
    'stop_time' => '16:59:59', // 5pm
  );
  $schedules[0][] = array(
    'channel' => 1,
    'day' => 3, // thursday
    'start_time' => '16:00:00', // 4pm
    'stop_time' => '16:59:59', // 5pm
  );
  $schedules[0][] = array(
    'channel' => 1,
    'day' => 4, // friday
    'start_time' => '16:00:00', // 4pm
    'stop_time' => '16:59:59', // 5pm
  );

  // schedule 2
  $schedules[1][] = array(
    'channel' => 4,
    'day' => 0, // monday
    'start_time' => '17:00:00', // 5pm
    'stop_time' => '17:59:59', // 6pm
  );
  $schedules[1][] = array(
    'channel' => 4,
    'day' => 1, // tuesday
    'start_time' => '17:00:00', // 5pm
    'stop_time' => '17:59:59', // 6pm
  );
  $schedules[1][] = array(
    'channel' => 4,
    'day' => 2, // wednesday
    'start_time' => '17:00:00', // 5pm
    'stop_time' => '17:59:59', // 6pm
  );
  $schedules[1][] = array(
    'channel' => 4,
    'day' => 3, // thursday
    'start_time' => '17:00:00', // 5pm
    'stop_time' => '17:59:59', // 6pm
  );
  $schedules[1][] = array(
    'channel' => 4,
    'day' => 4, // friday
    'start_time' => '17:00:00', // 5pm
    'stop_time' => '17:59:59', // 6pm
  );

  return $schedules;
}

/**
 * Page callback.
 */
function mnn_show_yc_schedule() {
  jquery_ui_add('ui.datepicker');

  drupal_add_js(drupal_get_path('module', 'mnn_show').'/mnn_show.js');
  $content = '<div id="yc-schedule">';
  $content .= '<header id="schedule-header"> <div class="inner"> <div class="nav clearfix"></div> </div> </header>';
  $content .= '<div id="schedule-0" class="schedule-grid one-hour"> <div class="title">MNN1: Community Channel Schedule</div> <div class="rows"></div> </div>';
  $content .= '<div id="schedule-1" class="schedule-grid one-hour"> <div class="title">MNN4: Culture Channel Schedule</div> <div class="rows"></div> </div>';
  $content .= '</div>'; // yc-schedule

  return $content;
}

