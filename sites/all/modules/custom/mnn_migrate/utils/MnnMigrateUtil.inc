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
  public static function getUrlAlias($nid)
  {
    $result = Database::getConnection('default', 'migrate')
      ->select('url_alias', 'ua')
      ->fields('ua', array('dst'))
      ->condition('ua.src', 'node/' . $nid, '=')
      ->execute()
      ->fetchObject();

    return is_object($result) && !empty($result->dst) ? $result->dst : NULL;
  }

  /**
   * Get taxonomy terms by given old nvid.
   *
   * @param $nvid Integer
   *   Vid from mnn6 of node being migrated.
   * @return null|string
   *   Returns taxonomy terms names.
   */
  public static function getProperCategories($nvid)
  {
    $query = Database::getConnection('default', 'migrate')
      ->select('term_node', 'tn');
    $query->join('term_data', 'td', 'tn.tid = td.tid');
    $query->addField('td', 'name');
    $query->condition('tn.vid', $nvid, '=');
    $query->orderBy('tn.tid', 'ASC');
    $result = $query->execute()->fetchCol();

    return is_array($result) && !empty($result) ? implode(',', $result) : NULL;
  }

} 