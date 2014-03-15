<?php

class MnnMigrateUtil
{
  /**
   * Function to retrieve drupal7 body format value
   * based on drupal6 body format value.
   *
   * @param $oldFormat Integer
   *   Body format - drupal6
   * @return string
   *   Body format - drupal7
   */
  public static function getTextFormat($oldFormat)
  {
    switch ($oldFormat) {
      case 1:
        $newFormat = 'filtered_html';
        break;
      case 2:
        $newFormat = 'full_html';
        break;
      case 3:
        $newFormat = 'php_code';
        break;
      default:
        $newFormat = 'plain_text';
    }

    return $newFormat;
  }

  /**
   * Function to retrieve url alias of
   * given node.
   *
   * @param $nid Integer
   *   Nid - node id that we want to retrieve url alias for.
   * @return null|string
   *   Alias if one exists otherwise NULL.
   */
  public static function getUrlAlias($nid) {
    $result = Database::getConnection('default', 'migrate')
      ->select('url_alias', 'ua')
      ->fields('ua', array('dst'))
      ->condition('ua.src', 'node/' . $nid, '=')
      ->execute()
      ->fetchObject();

    return is_object($result) && !empty($result->dst) ? $result->dst : NULL;
  }

} 