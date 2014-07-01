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

/* top row*/
if ($top_classes) {
  print '<div class="' . $top_classes . ' cm-row">';
}
else {
  print '<div class="cm-row">';
}
    print '<div class="inside">';
      print $content['top'];
    print '</div>'; /* end inside */
  print '</div>'; /* end row */

/* center row*/
if ($center_classes) {
  print '<div class="' . $center_classes . ' cm-row">';
}
else {
  print '<div class="cm-row">';
}
  print '<div class="inside">';

    /* left column */
    if ($left_classes) {
      print '<div class="' . $left_classes . ' column left">';
    }
    else {
      print '<div class="column left">';
    }
        print '<div class="inside">';
          print $content['left'];
        print '</div>';
      print '</div>';

    /* right column */
    if ($right_classes) {
      print '<div class="' . $right_classes . ' column right">';
    }
    else {
      print '<div class="column right">';
    }
      print '<div class="inside">';
        print $content['right'];
      print '</div>';
    print '</div>'; /* end column */

  print '</div>'; /* end inside */
print '</div>'; /* end row */

/* bottom row*/
if ($bottom_classes) {
  print '<div class="' . $bottom_classes . ' cm-row">';
}
else {
  print '<div class="cm-row">';
}
    print '<div class="inside">';
     print $content['bottom'];
    print '</div>'; /* end inside */
  print '</div>'; /* end row */
