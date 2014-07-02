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

  /* content wrapper */
  print '<div class="cm-row teaser grid-item">';
    print '<div class="wrapper">';
      print '<div class="inside">';
       if ($wrapper) :
          print $wrapper;
        endif;
      print '</div>'; /* end inside */
    print '</div>'; /* end row */
  print '</div>'; /* end row */
