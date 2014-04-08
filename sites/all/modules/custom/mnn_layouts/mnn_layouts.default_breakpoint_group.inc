<?php
/**
 * @file
 * mnn_layouts.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function mnn_layouts_default_breakpoint_group() {
  $export = array();

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'breakpoints.theme.cm_theme_zen.narrow';
  $breakpoints[] = 'breakpoints.theme.cm_theme_zen.wide';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'full';
  $breakpoint_group->name = 'full';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['full'] = $breakpoint_group;

  return $export;
}
