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

  print '<div class="cm-row full top">';
    print '<div class="inside">';
      if ($top) :
        print $top;
      endif;
    print '</div>'; /* end inside */
  print '</div>'; /* end row */

/* center row*/
  print '<div class="cm-row full center">';
    print '<div class="inside">';

    /* left column */
      print '<div class="cm-column left">';
        print '<div class="inside">';
          if ($left) :
            print $left;
          endif;
        print '</div>';
      print '</div>';

    /* right column */
      print '<div class="cm-column right">';
        print '<div class="inside">';
          if ($right) :
            print $right;
          endif;
        print '</div>';
      print '</div>'; /* end column */

  print '</div>'; /* end inside */
print '</div>'; /* end row */

/* bottom row*/
  print '<div class="cm-row full bottom">';
    print '<div class="inside">';
     if ($bottom) :
        print $bottom;
      endif;
    print '</div>'; /* end inside */
  print '</div>'; /* end row */
