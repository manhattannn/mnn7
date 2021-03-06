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
      'body' => '<div class="footer-mp">
	<div class="wrap left">
		<h5>Midtown</h5>
		<br />
		537 West 59th Street<br />
		New York, NY 10019</div>
	<div class="wrap center">
<h5>El Barrio Firehouse Community Center</h5>
		<div class="c-left">
			175 E 104th Street<br />
			New York, NY 10029</div>
		<div class="c-right">Phone: 212-757-2670<br />
			Fax: 212-757-1603</div>
	</div>
	<div class="wrap right">
		<h5>Resources</h5>
		<ul>
			<li><a href="/contact">Contact Us</a></li>
			<li><a href="/node/655">Job Listings</a></li>
			<li><a href="/node/713">Schedule</a></li>
			<li><a href="#">Upload Media</a></li>
			<li><a href="#">Producer Portal</a></li>
		</ul>
	</div>
</div>
',
      'format' => 'full_html',
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
    $pane->pid = 'new-f95edc23-9e06-489a-82d8-efbb4daf3231';
    $pane->panel = 'main';
    $pane->type = 'block';
    $pane->subtype = 'mnn_show-watch_now';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'block-mnn-show-watch-now',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f95edc23-9e06-489a-82d8-efbb4daf3231';
    $display->content['new-f95edc23-9e06-489a-82d8-efbb4daf3231'] = $pane;
    $display->panels['main'][0] = 'new-f95edc23-9e06-489a-82d8-efbb4daf3231';
    $pane = new stdClass();
    $pane->pid = 'new-a27d81ec-b028-406e-869b-499a708f9e12';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="content">
	<div class="col">
		<div class="button youtube"><a href="http://www.youtube.com/user/MNN537" target="_blank">Watch Clips on YouTube</a></div>
		<div class="button vimeo"><a href="http://vimeo.com/mnn" target="_blank">Watch Clips on Vimeo</a></div>
	</div>
	<div class="col">
		<div class="button facebook"><a href="http://www.facebook.com/pages/MNN/326158948121?sk=wall" target="_blank">Fan us on Facebook</a></div>
		<div class="button twitter"><a href="http://twitter.com/MNN59" target="_blank">Follow us on Twitter</a></div>
	</div>
	<div class="col">
		<div class="button instagram"><a href="http://instagram.com/mnnnyc" target="_blank">Instagram</a></div>
		<div class="button linkedin"><a href="https://www.linkedin.com/company/manhattan-neighborhood-network" target="_blank">LinkedIn</a></div>
	</div>
</div>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a27d81ec-b028-406e-869b-499a708f9e12';
    $display->content['new-a27d81ec-b028-406e-869b-499a708f9e12'] = $pane;
    $display->panels['main'][1] = 'new-a27d81ec-b028-406e-869b-499a708f9e12';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['sidebar'] = $mini;

  return $export;
}
