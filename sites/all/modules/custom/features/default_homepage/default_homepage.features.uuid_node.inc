<?php
/**
 * @file
 * default_homepage.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function default_homepage_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Plantaardig',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'd6dc1594-0591-4a6a-8144-a0dc8ec9a3e8',
  'type' => 'page',
  'language' => 'nl',
  'created' => 1419941511,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4d7dcc7a-ef5c-4cea-af0e-afde411c0105',
  'revision_uid' => 1,
  'field_paragraph_s' => array(
    'und' => array(
      0 => array(
        'value' => 1,
        'revision_id' => 1,
      ),
      1 => array(
        'value' => 2,
        'revision_id' => 2,
      ),
      2 => array(
        'value' => 4,
        'revision_id' => 4,
      ),
      3 => array(
        'value' => 3,
        'revision_id' => 3,
      ),
      4 => array(
        'value' => 6,
        'revision_id' => 6,
      ),
      5 => array(
        'value' => 5,
        'revision_id' => 5,
      ),
      6 => array(
        'value' => 7,
        'revision_id' => 7,
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'name' => 'nick',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-12-30 13:11:51 +0100',
);
  return $nodes;
}
