<?php
/**
 * @file
 * stanford_landing_page.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function stanford_landing_page_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_landing_page_item|stanford_4_col_header';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_landing_page_item';
  $ds_fieldsetting->view_mode = 'stanford_4_col_header';
  $ds_fieldsetting->settings = array(
    'stanford_display_image' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'stanford_display_title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['field_collection_item|field_landing_page_item|stanford_4_col_header'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function stanford_landing_page_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'list_display_image';
  $ds_field->label = 'List Display Image';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href=[field_collection_item:field-s-lp-item-link:url]>
  <img src="[site:url]sites/default/files/styles/med-square/public/[field_collection_item:field-s-lp-item-image:file:name]" />
</a>
',
      'format' => 'full_html',
    ),
    'use_token' => 1,
  );
  $export['list_display_image'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'list_display_title';
  $ds_field->label = 'List Display Title';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<h2><a href=[field_collection_item:field-s-lp-item-link:url]>[field_collection_item:field-s-lp-item-title]</a></h2>',
      'format' => 'full_html',
    ),
    'use_token' => 1,
  );
  $export['list_display_title'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'stanford_display_image';
  $ds_field->label = 'Block Display Image';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href=[field_collection_item:field-s-lp-item-link:url]>
  <img src="[site:url]sites/default/files/styles/4-col-header/public/[field_collection_item:field-s-lp-item-image:file:name]" />
</a>
',
      'format' => 'full_html',
    ),
    'use_token' => 1,
  );
  $export['stanford_display_image'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'stanford_display_title';
  $ds_field->label = 'Block Display Title';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<h2><a href=[field_collection_item:field-s-lp-item-link:url]>[field_collection_item:field-s-lp-item-title]</a></h2>',
      'format' => 'full_html',
    ),
    'use_token' => 1,
  );
  $export['stanford_display_title'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'tile_display_image';
  $ds_field->label = 'Tile Display Image';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href=[field_collection_item:field-s-lp-item-link:url]>
  <img src="[site:url]sites/default/files/styles/large-landscape/public/[field_collection_item:field-s-lp-item-image:file:name]" />
</a>',
      'format' => 'full_html',
    ),
    'use_token' => 1,
  );
  $export['tile_display_image'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'tile_display_title';
  $ds_field->label = 'Tile Display Title';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<h2><a href=[field_collection_item:field-s-lp-item-link:url]>[field_collection_item:field-s-lp-item-title]</a></h2>',
      'format' => 'full_html',
    ),
    'use_token' => 1,
  );
  $export['tile_display_title'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function stanford_landing_page_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_landing_page_item|large_landscape';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_landing_page_item';
  $ds_layout->view_mode = 'large_landscape';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_s_lp_item_title',
        1 => 'field_s_lp_item_image',
        2 => 'field_s_lp_item_description',
        3 => 'field_s_lp_item_link',
      ),
    ),
    'fields' => array(
      'field_s_lp_item_title' => 'ds_content',
      'field_s_lp_item_image' => 'ds_content',
      'field_s_lp_item_description' => 'ds_content',
      'field_s_lp_item_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['field_collection_item|field_landing_page_item|large_landscape'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_landing_page_item|stanford_4_col_header';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_landing_page_item';
  $ds_layout->view_mode = 'stanford_4_col_header';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_s_block_style',
        1 => 'stanford_display_title',
        2 => 'stanford_display_image',
        3 => 'field_s_lp_item_description',
        4 => 'field_s_lp_item_link',
        5 => 'group_s_more_link_style',
      ),
    ),
    'fields' => array(
      'group_s_block_style' => 'ds_content',
      'stanford_display_title' => 'ds_content',
      'stanford_display_image' => 'ds_content',
      'field_s_lp_item_description' => 'ds_content',
      'field_s_lp_item_link' => 'ds_content',
      'group_s_more_link_style' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['field_collection_item|field_landing_page_item|stanford_4_col_header'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function stanford_landing_page_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'large_landscape';
  $ds_view_mode->label = 'Large Landscape';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['large_landscape'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'stanford_block';
  $ds_view_mode->label = 'Block';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['stanford_block'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'stanford_list';
  $ds_view_mode->label = 'List';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['stanford_list'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'stanford_tiles';
  $ds_view_mode->label = 'Tiles';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['stanford_tiles'] = $ds_view_mode;

  return $export;
}
