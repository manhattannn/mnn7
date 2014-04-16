<?php

ctools_include('mnn_show.common', 'mnn_show', '');

/**
 * Page callback.
 */
function mnn_show_show_redirect_to_schedule_page()
{
  drupal_goto('schedule');
}