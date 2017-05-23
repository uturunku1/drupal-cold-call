<?php
/**
 * @file
 * bundle_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bundle_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
