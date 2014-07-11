<?php
/**
 * @file
 * mnn_snippets.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function mnn_snippets_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Mailchimp Signup';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'mailchimp_signup';
  $fe_block_boxes->body = '<div class="copy-col">
	<p>Subscribe to our mailing list for the latest updates from MNN.</p>
</div>
<form action="http://mnn.us4.list-manage.com/subscribe/post?u=4d045a12d9e5a154cb25b604e&amp;id=78cc5c0fcd" class="validate" id="mc-embedded-subscribe-form" method="post" name="mc-embedded-subscribe-form" target="_blank">
	<div class="mc-field-group"><input class="required email" id="mce-EMAIL" name="EMAIL" type="text" value="" placeholder="Email" /></div>
	<input id="mce-group[2181]-2181-0" name="group[2181][1]" type="hidden" value="1" /> <input id="mce-EMAILTYPE-0" name="EMAILTYPE" type="hidden" value="html" /> <input class="button" id="mc-embedded-subscribe" name="subscribe" type="submit" value="Sign Up" />&nbsp;</form>
';

  $export['mailchimp_signup'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Mailchimp Signup for News Page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'mailchimp_signup_news_page';
  $fe_block_boxes->body = '<div class="copy-col">
	<p>Subscribe to our mailing list for the latest updates from MNN.</p>
</div>
<form action="http://mnn.us4.list-manage.com/subscribe/post?u=4d045a12d9e5a154cb25b604e&amp;id=78cc5c0fcd" class="validate" id="mc-embedded-subscribe-form" method="post" name="mc-embedded-subscribe-form" target="_blank">
	<div class="mc-field-group"><input class="required email" id="mce-EMAIL" name="EMAIL" type="text" value="" placeholder="Email" /></div>
	<input id="mce-group[2181]-2181-0" name="group[2181][1]" type="hidden" value="1" /> <input id="mce-EMAILTYPE-0" name="EMAILTYPE" type="hidden" value="html" /> <input class="button" id="mc-embedded-subscribe" name="subscribe" type="submit" value="Sign Up" />&nbsp;</form>
';

  $export['mailchimp_signup_news_page'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Producer login';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'producer_login';
  $fe_block_boxes->body = '<div class="prod-login"><a href="http://cm.mnn.org/user" target="_blank" title="Producer Login">Producer Login</a></div>
<div class="prod-link"><a href="/user/login" title="Upload Media">Upload Media</a></div>
';

  $export['producer_login'] = $fe_block_boxes;

  return $export;
}
