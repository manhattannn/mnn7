<?php
/**
 * @file
 * mnn_layouts.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function mnn_layouts_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer';
  $mini->category = 'Regions';
  $mini->admin_title = 'Footer';
  $mini->admin_description = 'Footer minipanel';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'zen_no_wrapper';
  $display->layout_settings = array(
    'main_classes' => '',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c082b038-397e-474e-83e8-221e43a2f943';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bbfa4184-25b4-42e6-9209-20b8e40942c1';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<table border="0" cellpadding="1" cellspacing="1" style="width: 500px;">
	<tbody>
		<tr>
			<td><strong>Midtown</strong></td>
			<td><strong>El Barrio Firehouse Community Center</strong></td>
			<td>&nbsp;</td>
			<td><strong>Resources</strong></td>
			<td>&nbsp;</td>
			<td>&nbsp;</td>
		</tr>
		<tr>
			<td>537 West 59th Street</td>
			<td>175 E 104th Street</td>
			<td>Phone: 212-757-2670</td>
			<td>Contact Us</td>
			<td><a href="/node/655">Job Listings</a></td>
			<td>Producer Portal</td>
		</tr>
		<tr>
			<td>New York, NY 10019</td>
			<td>New York, NY 10029</td>
			<td>Fax: 212-757-1603</td>
			<td><a href="/node/713">Schedule</a></td>
			<td>Upload Media</td>
			<td>&nbsp;</td>
		</tr>
	</tbody>
</table>
<p>&nbsp;</p>
',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bbfa4184-25b4-42e6-9209-20b8e40942c1';
    $display->content['new-bbfa4184-25b4-42e6-9209-20b8e40942c1'] = $pane;
    $display->panels['main'][0] = 'new-bbfa4184-25b4-42e6-9209-20b8e40942c1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-bbfa4184-25b4-42e6-9209-20b8e40942c1';
  $mini->display = $display;
  $export['footer'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'sidebar';
  $mini->category = 'Regions';
  $mini->admin_title = 'Sidebar';
  $mini->admin_description = 'Holds all of the sidebar blocks.';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'zen_no_wrapper';
  $display->layout_settings = array(
    'main_classes' => '',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b7ecddb7-b224-4274-b51b-54a5f554da4c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1d54dcab-d539-49e2-9179-e806c5577dcd';
    $pane->panel = 'main';
    $pane->type = 'views';
    $pane->subtype = 'mnn_channel_lists';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1d54dcab-d539-49e2-9179-e806c5577dcd';
    $display->content['new-1d54dcab-d539-49e2-9179-e806c5577dcd'] = $pane;
    $display->panels['main'][0] = 'new-1d54dcab-d539-49e2-9179-e806c5577dcd';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-1d54dcab-d539-49e2-9179-e806c5577dcd';
  $mini->display = $display;
  $export['sidebar'] = $mini;

  return $export;
}
