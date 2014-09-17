<?php
/**
 * @file
 * stanford_landing_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_landing_page_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_block_image_border_style|field_collection_item|field_landing_page_item|stanford_blocks';
  $field_group->group_name = 'group_s_block_image_border_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_landing_page_item';
  $field_group->mode = 'stanford_blocks';
  $field_group->parent_name = 'group_s_block_style';
  $field_group->data = array(
    'label' => 'Image Border Style',
    'weight' => '6',
    'children' => array(
      0 => 'field_s_lp_item_image',
      1 => 'group_s_block_style',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image Border Style',
      'instance_settings' => array(
        'classes' => 'border-simple-nowidth border-shadow',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_block_image_border_style|field_collection_item|field_landing_page_item|stanford_blocks'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_block_link_style|field_collection_item|field_landing_page_item|stanford_blocks';
  $field_group->group_name = 'group_s_block_link_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_landing_page_item';
  $field_group->mode = 'stanford_blocks';
  $field_group->parent_name = 'group_s_block_style';
  $field_group->data = array(
    'label' => 'Link Style',
    'weight' => '8',
    'children' => array(
      0 => 'field_s_lp_item_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-s-block-link-style field-group-div',
      ),
    ),
  );
  $export['group_s_block_link_style|field_collection_item|field_landing_page_item|stanford_blocks'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_block_style|field_collection_item|field_landing_page_item|stanford_4_col_header';
  $field_group->group_name = 'group_s_block_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_landing_page_item';
  $field_group->mode = 'stanford_4_col_header';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Block Style',
    'weight' => '0',
    'children' => array(
      0 => 'field_s_lp_item_description',
      1 => 'field_s_lp_item_image',
      2 => 'stanford_display_title',
      3 => 'group_s_more_link_style',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Block Style',
      'instance_settings' => array(
        'classes' => 'well',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_block_style|field_collection_item|field_landing_page_item|stanford_4_col_header'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_block_style|field_collection_item|field_landing_page_item|stanford_blocks';
  $field_group->group_name = 'group_s_block_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_landing_page_item';
  $field_group->mode = 'stanford_blocks';
  $field_group->parent_name = 'group_s_block_image_border_style';
  $field_group->data = array(
    'label' => 'Block Style',
    'weight' => '0',
    'children' => array(
      0 => 'field_s_lp_item_description',
      1 => 'group_s_block_image_border_style',
      2 => 'group_s_block_title_style',
      3 => 'group_s_block_link_style',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Block Style',
      'instance_settings' => array(
        'classes' => 'well span4',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_block_style|field_collection_item|field_landing_page_item|stanford_blocks'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_block_title_style|field_collection_item|field_landing_page_item|stanford_blocks';
  $field_group->group_name = 'group_s_block_title_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_landing_page_item';
  $field_group->mode = 'stanford_blocks';
  $field_group->parent_name = 'group_s_block_style';
  $field_group->data = array(
    'label' => 'Title Style',
    'weight' => '5',
    'children' => array(
      0 => 'field_s_lp_item_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-s-block-title-style field-group-div',
      ),
    ),
  );
  $export['group_s_block_title_style|field_collection_item|field_landing_page_item|stanford_blocks'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_more_link_style|field_collection_item|field_landing_page_item|stanford_4_col_header';
  $field_group->group_name = 'group_s_more_link_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_landing_page_item';
  $field_group->mode = 'stanford_4_col_header';
  $field_group->parent_name = 'group_s_block_style';
  $field_group->data = array(
    'label' => 'More LInk Style',
    'weight' => '5',
    'children' => array(
      0 => 'field_s_lp_item_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'More LInk Style',
      'instance_settings' => array(
        'classes' => 'more-link',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_more_link_style|field_collection_item|field_landing_page_item|stanford_4_col_header'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_more_link_style|field_collection_item|field_landing_page_item|stanford_medium_square';
  $field_group->group_name = 'group_s_more_link_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_landing_page_item';
  $field_group->mode = 'stanford_medium_square';
  $field_group->parent_name = 'group_s_postcard_content';
  $field_group->data = array(
    'label' => 'Link Style',
    'weight' => '2',
    'children' => array(
      0 => 'field_s_lp_item_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Link Style',
      'instance_settings' => array(
        'classes' => 'more-link',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_more_link_style|field_collection_item|field_landing_page_item|stanford_medium_square'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard_content|field_collection_item|field_landing_page_item|stanford_medium_square';
  $field_group->group_name = 'group_s_postcard_content';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_landing_page_item';
  $field_group->mode = 'stanford_medium_square';
  $field_group->parent_name = 'group_s_postcard';
  $field_group->data = array(
    'label' => 'Postcard Content',
    'weight' => '12',
    'children' => array(
      0 => 'field_s_lp_item_description',
      1 => 'tile_display_title',
      2 => 'group_s_more_link_style',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Content',
      'instance_settings' => array(
        'classes' => 'postcard-content',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard_content|field_collection_item|field_landing_page_item|stanford_medium_square'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard_image|field_collection_item|field_landing_page_item|stanford_medium_square';
  $field_group->group_name = 'group_s_postcard_image';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_landing_page_item';
  $field_group->mode = 'stanford_medium_square';
  $field_group->parent_name = 'group_s_postcard';
  $field_group->data = array(
    'label' => 'Postcard Image',
    'weight' => '11',
    'children' => array(
      0 => 'field_s_lp_item_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Image',
      'instance_settings' => array(
        'classes' => 'postcard-image',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard_image|field_collection_item|field_landing_page_item|stanford_medium_square'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard|field_collection_item|field_landing_page_item|stanford_medium_square';
  $field_group->group_name = 'group_s_postcard';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_landing_page_item';
  $field_group->mode = 'stanford_medium_square';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Postcard',
    'weight' => '0',
    'children' => array(
      0 => 'group_s_postcard_content',
      1 => 'group_s_postcard_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard',
      'instance_settings' => array(
        'classes' => 'postcard-left',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard|field_collection_item|field_landing_page_item|stanford_medium_square'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_tile_link_style|field_collection_item|field_landing_page_item|large_landscape';
  $field_group->group_name = 'group_s_tile_link_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_landing_page_item';
  $field_group->mode = 'large_landscape';
  $field_group->parent_name = 'group_tile_style';
  $field_group->data = array(
    'label' => 'Tile Link Style',
    'weight' => '13',
    'children' => array(
      0 => 'field_s_lp_item_image',
      1 => 'tile_display_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tile Link Style',
      'instance_settings' => array(
        'classes' => 'tile-link',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_tile_link_style|field_collection_item|field_landing_page_item|large_landscape'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tile_style|field_collection_item|field_landing_page_item|large_landscape';
  $field_group->group_name = 'group_tile_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_landing_page_item';
  $field_group->mode = 'large_landscape';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tile Style',
    'weight' => '0',
    'children' => array(
      0 => 'field_s_lp_item_description',
      1 => 'group_s_tile_link_style',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tile Style',
      'instance_settings' => array(
        'classes' => 'tile',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_tile_style|field_collection_item|field_landing_page_item|large_landscape'] = $field_group;

  return $export;
}
