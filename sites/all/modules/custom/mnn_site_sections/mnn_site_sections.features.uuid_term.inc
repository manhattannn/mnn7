<?php
/**
 * @file
 * mnn_site_sections.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function mnn_site_sections_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Media Policy',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => '035846f5-90dc-463f-b85f-d39593e0e225',
    'vocabulary_machine_name' => 'sections',
    'parent' => array(
      0 => '89b6bc78-8599-4538-af57-9da1cbd343da',
    ),
  );
  $terms[] = array(
    'name' => 'Community Standards',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '03c766e3-7394-4627-9959-102c711543ca',
    'vocabulary_machine_name' => 'sections',
    'parent' => array(
      0 => '206b934d-ffa4-4d3c-b16d-0d42abbddad5',
    ),
  );
  $terms[] = array(
    'name' => 'Clip of the Week',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 9,
    'uuid' => '0a24ee3f-9e0c-4017-8303-65b19a31f718',
    'vocabulary_machine_name' => 'sections',
    'parent' => array(
      0 => '89b6bc78-8599-4538-af57-9da1cbd343da',
    ),
  );
  $terms[] = array(
    'name' => 'About Us',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 26,
    'uuid' => '0a84e4a1-4f32-4bdb-95fa-4db1cbc78cf5',
    'vocabulary_machine_name' => 'sections',
  );
  $terms[] = array(
    'name' => 'Chuck\'s Picks',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 10,
    'uuid' => '187f91b8-9624-4194-8a81-ac93597c0ee6',
    'vocabulary_machine_name' => 'sections',
    'parent' => array(
      0 => '89b6bc78-8599-4538-af57-9da1cbd343da',
    ),
  );
  $terms[] = array(
    'name' => 'Policies',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '206b934d-ffa4-4d3c-b16d-0d42abbddad5',
    'vocabulary_machine_name' => 'sections',
    'parent' => array(
      0 => '5ad93f81-c5d3-42fa-af57-0c9bfe0570a8',
    ),
  );
  $terms[] = array(
    'name' => 'MNN Youth Channel',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '2278c906-1251-401e-97ba-b321041499d4',
    'vocabulary_machine_name' => 'sections',
    'parent' => array(
      0 => '89b6bc78-8599-4538-af57-9da1cbd343da',
    ),
  );
  $terms[] = array(
    'name' => 'Media',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 25,
    'uuid' => '42c001b9-f87a-495a-8c53-4d51d5317983',
    'vocabulary_machine_name' => 'sections',
  );
  $terms[] = array(
    'name' => '59th Street Studios',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '44d03a5d-5683-440e-8b6e-cfb10a4b45de',
    'vocabulary_machine_name' => 'sections',
    'parent' => array(
      0 => '686a2262-9043-45b2-9091-ef9e0dc81296',
    ),
  );
  $terms[] = array(
    'name' => 'Classes',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 11,
    'uuid' => '45639bbd-deea-4ee7-97ee-571c143689ae',
    'vocabulary_machine_name' => 'sections',
    'parent' => array(
      0 => '89b6bc78-8599-4538-af57-9da1cbd343da',
    ),
  );
  $terms[] = array(
    'name' => 'Producers',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '5ad93f81-c5d3-42fa-af57-0c9bfe0570a8',
    'vocabulary_machine_name' => 'sections',
  );
  $terms[] = array(
    'name' => 'Locations',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 13,
    'uuid' => '686a2262-9043-45b2-9091-ef9e0dc81296',
    'vocabulary_machine_name' => 'sections',
  );
  $terms[] = array(
    'name' => 'Programming Policies',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6c63d64a-57f3-40c0-b065-2d5e9b691758',
    'vocabulary_machine_name' => 'sections',
    'parent' => array(
      0 => '206b934d-ffa4-4d3c-b16d-0d42abbddad5',
    ),
  );
  $terms[] = array(
    'name' => 'MNN Diaries',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '6ce75fd3-0927-4c44-b491-f62fa9e3a640',
    'vocabulary_machine_name' => 'sections',
    'parent' => array(
      0 => '89b6bc78-8599-4538-af57-9da1cbd343da',
    ),
  );
  $terms[] = array(
    'name' => 'Manhattan Borough President',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '74ae1e13-543b-4d99-97b1-f0415ab287a8',
    'vocabulary_machine_name' => 'sections',
    'parent' => array(
      0 => '8a3bed6d-3f51-4566-a096-afb08fee5d03',
    ),
  );
  $terms[] = array(
    'name' => 'Recipirocity',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '7d90dd55-24ca-4c0c-96eb-3eea092b99c5',
    'vocabulary_machine_name' => 'sections',
    'parent' => array(
      0 => '206b934d-ffa4-4d3c-b16d-0d42abbddad5',
    ),
  );
  $terms[] = array(
    'name' => 'News and Views',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7ff57872-5b68-471f-9be0-35e582716c1a',
    'vocabulary_machine_name' => 'sections',
    'parent' => array(
      0 => '89b6bc78-8599-4538-af57-9da1cbd343da',
    ),
  );
  $terms[] = array(
    'name' => 'Media Education',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 23,
    'uuid' => '87a044fd-1273-45d8-b072-fc5e4b06693f',
    'vocabulary_machine_name' => 'sections',
  );
  $terms[] = array(
    'name' => 'News',
    'description' => NULL,
    'format' => NULL,
    'weight' => 22,
    'uuid' => '89b6bc78-8599-4538-af57-9da1cbd343da',
    'vocabulary_machine_name' => 'sections',
  );
  $terms[] = array(
    'name' => 'Race2Represent',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 7,
    'uuid' => '8a3bed6d-3f51-4566-a096-afb08fee5d03',
    'vocabulary_machine_name' => 'sections',
    'parent' => array(
      0 => '89b6bc78-8599-4538-af57-9da1cbd343da',
    ),
  );
  $terms[] = array(
    'name' => 'Events',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 16,
    'uuid' => '8d5ea9f8-b121-4d09-a0ae-4769e0754a6e',
    'vocabulary_machine_name' => 'sections',
  );
  $terms[] = array(
    'name' => 'Programming Highlights',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '8de74a8c-0ad9-4544-9db7-bf4cf998b891',
    'vocabulary_machine_name' => 'sections',
    'parent' => array(
      0 => '89b6bc78-8599-4538-af57-9da1cbd343da',
    ),
  );
  $terms[] = array(
    'name' => 'MNN El Barrio Firehouse',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '8ffc4fb0-98e6-4c1f-8138-a494721183ce',
    'vocabulary_machine_name' => 'sections',
    'parent' => array(
      0 => '686a2262-9043-45b2-9091-ef9e0dc81296',
    ),
  );
  $terms[] = array(
    'name' => 'Organizations',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => 'a220c06f-4bc8-4fe4-9588-23eea7417425',
    'vocabulary_machine_name' => 'sections',
    'parent' => array(
      0 => 'eb0f8d0d-0c1a-4de3-adde-0344b2de4fa0',
    ),
  );
  $terms[] = array(
    'name' => 'Jobs',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b4a9139b-cb7b-47b5-8fd3-2ceaf103eb17',
    'vocabulary_machine_name' => 'sections',
    'parent' => array(
      0 => '0a84e4a1-4f32-4bdb-95fa-4db1cbc78cf5',
    ),
  );
  $terms[] = array(
    'name' => 'FAQs',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b8c857f9-d321-415a-873c-fe23a448df79',
    'vocabulary_machine_name' => 'sections',
    'parent' => array(
      0 => '5ad93f81-c5d3-42fa-af57-0c9bfe0570a8',
    ),
  );
  $terms[] = array(
    'name' => 'Individual',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => 'b9c1fefa-0371-4cf5-a77f-84e456c8d4c1',
    'vocabulary_machine_name' => 'sections',
    'parent' => array(
      0 => 'eb0f8d0d-0c1a-4de3-adde-0344b2de4fa0',
    ),
  );
  $terms[] = array(
    'name' => 'HOME',
    'description' => '<p>For New Homepage</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c4a3ed43-817a-419b-a56b-22c92f6f8f8f',
    'vocabulary_machine_name' => 'sections',
  );
  $terms[] = array(
    'name' => 'Class Tracks',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd6733155-1195-4323-b667-32e38b4535f5',
    'vocabulary_machine_name' => 'sections',
    'parent' => array(
      0 => '87a044fd-1273-45d8-b072-fc5e4b06693f',
    ),
  );
  $terms[] = array(
    'name' => 'Events',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => 'd77fb1fd-abde-419c-93be-e166adf5ceb5',
    'vocabulary_machine_name' => 'sections',
    'parent' => array(
      0 => '89b6bc78-8599-4538-af57-9da1cbd343da',
    ),
  );
  $terms[] = array(
    'name' => 'City Council Districts',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e9b404e0-34a9-47c8-a993-1b5b2767e191',
    'vocabulary_machine_name' => 'sections',
    'parent' => array(
      0 => '8a3bed6d-3f51-4566-a096-afb08fee5d03',
    ),
  );
  $terms[] = array(
    'name' => 'Get Involved',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 17,
    'uuid' => 'eb0f8d0d-0c1a-4de3-adde-0344b2de4fa0',
    'vocabulary_machine_name' => 'sections',
  );
  $terms[] = array(
    'name' => 'Youth',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'edf35b7c-c85e-44aa-8751-b4d38c62cb46',
    'vocabulary_machine_name' => 'sections',
    'parent' => array(
      0 => 'eb0f8d0d-0c1a-4de3-adde-0344b2de4fa0',
    ),
  );
  $terms[] = array(
    'name' => 'Community Media',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 8,
    'uuid' => 'edf7679d-bcc7-40d4-b227-2e190326d7ee',
    'vocabulary_machine_name' => 'sections',
    'parent' => array(
      0 => '89b6bc78-8599-4538-af57-9da1cbd343da',
    ),
  );
  $terms[] = array(
    'name' => 'Youth Channel',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => 'f8193064-2022-4c45-aae3-201309b29e34',
    'vocabulary_machine_name' => 'sections',
    'parent' => array(
      0 => '686a2262-9043-45b2-9091-ef9e0dc81296',
    ),
  );
  $terms[] = array(
    'name' => 'Program Guide',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'fbbf34d5-f286-4f25-8269-aba0b313fdba',
    'vocabulary_machine_name' => 'sections',
    'parent' => array(
      0 => '89b6bc78-8599-4538-af57-9da1cbd343da',
    ),
  );
  $terms[] = array(
    'name' => 'Programming',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 9,
    'uuid' => 'ffe1cd71-fc63-402c-bfdd-6c085acfe3ff',
    'vocabulary_machine_name' => 'sections',
  );
  return $terms;
}
