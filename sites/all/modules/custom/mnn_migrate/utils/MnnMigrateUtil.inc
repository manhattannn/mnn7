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
      // Was Filtered HTML - HTML corrector - HTML filter - Line break converter - URL Filter
      case 1:
        $newFormat = 'filtered_html';
        break;
      // Was Full HTML - HTML Corrector - Inline Images - URL Filter  
      case 2:
      // Was Unfiltered HTML - HTML corrector only.
      case 4:
      // Was WYSIWYG - HTML corrector only.
      case 5:
        $newFormat = 'full_html';
        break;
      // Was PHP code - Inline images - PHP evaluator;
      // BAD IDEA TO JUST MIGRATE - SET AS PLAIN TEXT;
      case 3:
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

    $categories =  is_array($result) && !empty($result) ? implode(',', $result): 'News';
    return $categories;
  }

} 
