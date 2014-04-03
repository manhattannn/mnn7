<?php
/**
 * @file
 * Template for a "no wrapper" layout; useful for mini panels, etc.
 *
 * This template provides a very simple "one column" panel display layout.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   region of the layout. For example, $content['main'].
 * - $main_classes: Additional classes for the main region.
 */

if ($top_classes) {
  print '<div class="' . $top_classes . ' row">';
}
else {
  print '<div class="row">';
}
  print $content['top'];
  print '</div>';
  print '<div class="row">';
    if ($left_classes) {
      print '<div class="' . $left_classes . ' column">';
    }
    else {
      print '<div class="column">';
    }
    print $content['left'];
    print '</div>';
    if ($right_classes) {
    print '<div class="' . $right_classes . ' column">';
    }
    else {
      print '<div class="column">';
    }
    print $content['right'];
    print '</div>';
  print '</div>';
  if ($bottom_classes) {
    print '<div class="' . $bottom_classes . ' row">';
  }
  else {
    print '<div class="row">';
  }
  print $content['bottom'];
  print '</div>';
