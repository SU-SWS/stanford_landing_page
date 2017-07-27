<?php
/**
 * @file
 * stanford_landing_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_landing_page_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_circle_style|field_collection_item|field_landing_page_item|stanford_circles';
  $field_group->group_name = 'group_circle_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_landing_page_item';
  $field_group->mode = 'stanford_circles';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Circle Style',
    'weight' => '0',
    'children' => array(
      0 => 'field_s_lp_item_description',
      1 => 'circle_display_title',
      2 => 'group_circle_link_style',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Circle Style',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'circle',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_circle_style|field_collection_item|field_landing_page_item|stanford_circles'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lead_text_styles|node|stanford_landing_page|default';
  $field_group->group_name = 'group_lead_text_styles';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_landing_page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Lead text styles',
    'weight' => '1',
    'children' => array(
      0 => 'field_s_landing_page_lead_text',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Lead text styles',
      'instance_settings' => array(
        'classes' => 'summary',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_lead_text_styles|node|stanford_landing_page|default'] = $field_group;

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
  $field_groups['group_s_block_image_border_style|field_collection_item|field_landing_page_item|stanford_blocks'] = $field_group;

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
  $field_groups['group_s_block_link_style|field_collection_item|field_landing_page_item|stanford_blocks'] = $field_group;

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
      2 => 'field_s_lp_item_title',
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
  $field_groups['group_s_block_style|field_collection_item|field_landing_page_item|stanford_4_col_header'] = $field_group;

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
  $field_groups['group_s_block_style|field_collection_item|field_landing_page_item|stanford_blocks'] = $field_group;

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
  $field_groups['group_s_block_title_style|field_collection_item|field_landing_page_item|stanford_blocks'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_lp_advanced|field_collection_item|field_landing_page_item|form';
  $field_group->group_name = 'group_s_lp_advanced';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_landing_page_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Advanced',
    'weight' => '11',
    'children' => array(
      0 => 'field_s_lp_icon_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Advanced',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-s-lp-advanced field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_s_lp_advanced|field_collection_item|field_landing_page_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_lp_arrow_link|field_collection_item|field_landing_page_item|header_370x170';
  $field_group->group_name = 'group_s_lp_arrow_link';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_landing_page_item';
  $field_group->mode = 'header_370x170';
  $field_group->parent_name = 'group_s_lp_image_container';
  $field_group->data = array(
    'label' => 'Arrow link',
    'weight' => '8',
    'children' => array(
      0 => 'field_s_lp_icon_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Arrow link',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'postcard-linked-arrow group-s-lp-arrow-link field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_s_lp_arrow_link|field_collection_item|field_landing_page_item|header_370x170'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_lp_image_container|field_collection_item|field_landing_page_item|header_370x170';
  $field_group->group_name = 'group_s_lp_image_container';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_landing_page_item';
  $field_group->mode = 'header_370x170';
  $field_group->parent_name = 'group_s_lp_image_link';
  $field_group->data = array(
    'label' => 'Image Container',
    'weight' => '6',
    'children' => array(
      0 => 'field_s_lp_item_image',
      1 => 'group_s_lp_arrow_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image Container',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'postcard-linked-img group-s-lp-image-container field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_s_lp_image_container|field_collection_item|field_landing_page_item|header_370x170'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_lp_image_link|field_collection_item|field_landing_page_item|header_370x170';
  $field_group->group_name = 'group_s_lp_image_link';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_landing_page_item';
  $field_group->mode = 'header_370x170';
  $field_group->parent_name = 'group_s_lp_postcard';
  $field_group->data = array(
    'label' => 'Image link',
    'weight' => '1',
    'children' => array(
      0 => 'group_s_lp_image_container',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Image link',
      'instance_settings' => array(
        'link_to' => 'field_s_lp_item_link',
        'custom_url' => '',
        'custom_url_normalize' => 0,
        'target' => 'default',
        'classes' => 'postcard-linked-img-container group-s-lp-image-link field-group-link',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_s_lp_image_link|field_collection_item|field_landing_page_item|header_370x170'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_lp_item_content|field_collection_item|field_landing_page_item|form';
  $field_group->group_name = 'group_s_lp_item_content';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_landing_page_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Add/Edit Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_s_lp_2nd_links',
      1 => 'field_s_lp_item_description',
      2 => 'field_s_lp_item_image',
      3 => 'field_s_lp_item_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Add/Edit Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_s_lp_item_content|field_collection_item|field_landing_page_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_lp_postcard_body|field_collection_item|field_landing_page_item|header_370x170';
  $field_group->group_name = 'group_s_lp_postcard_body';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_landing_page_item';
  $field_group->mode = 'header_370x170';
  $field_group->parent_name = 'group_s_lp_postcard_content';
  $field_group->data = array(
    'label' => 'Postcard body',
    'weight' => '8',
    'children' => array(
      0 => 'field_s_lp_item_description',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard body',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'postcard-linked-body group-s-lp-postcard-body field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_s_lp_postcard_body|field_collection_item|field_landing_page_item|header_370x170'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_lp_postcard_content|field_collection_item|field_landing_page_item|header_370x170';
  $field_group->group_name = 'group_s_lp_postcard_content';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_landing_page_item';
  $field_group->mode = 'header_370x170';
  $field_group->parent_name = 'group_s_lp_postcard';
  $field_group->data = array(
    'label' => 'Postcard Content',
    'weight' => '2',
    'children' => array(
      0 => 'group_s_lp_title_link',
      1 => 'group_s_lp_postcard_body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Content',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'postcard-linked-content-container group-s-lp-postcard-content field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_s_lp_postcard_content|field_collection_item|field_landing_page_item|header_370x170'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_lp_postcard|field_collection_item|field_landing_page_item|header_370x170';
  $field_group->group_name = 'group_s_lp_postcard';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_landing_page_item';
  $field_group->mode = 'header_370x170';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Postcard',
    'weight' => '0',
    'children' => array(
      0 => 'group_s_lp_image_link',
      1 => 'group_s_lp_postcard_content',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'postcard-linked-container group-s-lp-postcard field-group-div ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_s_lp_postcard|field_collection_item|field_landing_page_item|header_370x170'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_lp_title_link|field_collection_item|field_landing_page_item|header_370x170';
  $field_group->group_name = 'group_s_lp_title_link';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_landing_page_item';
  $field_group->mode = 'header_370x170';
  $field_group->parent_name = 'group_s_lp_postcard_content';
  $field_group->data = array(
    'label' => 'Title link',
    'weight' => '7',
    'children' => array(
      0 => 'field_s_lp_item_title',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Title link',
      'instance_settings' => array(
        'link_to' => 'field_s_lp_item_link',
        'custom_url' => '',
        'custom_url_normalize' => 0,
        'target' => 'default',
        'classes' => 'postcard-linked-title group-s-lp-title-link field-group-link',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_s_lp_title_link|field_collection_item|field_landing_page_item|header_370x170'] = $field_group;

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
      1 => 'field_s_lp_2nd_links',
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
  $field_groups['group_s_more_link_style|field_collection_item|field_landing_page_item|stanford_4_col_header'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_more_link_style|field_collection_item|field_landing_page_item|stanford_6_col_banner';
  $field_group->group_name = 'group_s_more_link_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_landing_page_item';
  $field_group->mode = 'stanford_6_col_banner';
  $field_group->parent_name = 'group_side_info';
  $field_group->data = array(
    'label' => 'More Link Style',
    'weight' => '4',
    'children' => array(
      0 => 'field_s_lp_2nd_links',
      1 => 'field_s_lp_item_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'More Link Style',
      'instance_settings' => array(
        'id' => '',
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
  $field_groups['group_s_more_link_style|field_collection_item|field_landing_page_item|stanford_6_col_banner'] = $field_group;

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
    'weight' => '9',
    'children' => array(
      0 => 'field_s_lp_item_link',
      1 => 'field_s_lp_2nd_links',
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
  $field_groups['group_s_more_link_style|field_collection_item|field_landing_page_item|stanford_medium_square'] = $field_group;

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
      1 => 'field_s_lp_item_title',
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
  $field_groups['group_s_postcard_content|field_collection_item|field_landing_page_item|stanford_medium_square'] = $field_group;

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
  $field_groups['group_s_postcard_image|field_collection_item|field_landing_page_item|stanford_medium_square'] = $field_group;

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
  $field_groups['group_s_postcard|field_collection_item|field_landing_page_item|stanford_medium_square'] = $field_group;

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
    'label' => 'Card Link Style',
    'weight' => '13',
    'children' => array(
      0 => 'field_s_lp_item_image',
      1 => 'field_s_lp_item_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Card Link Style',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'tile-link column',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_s_tile_link_style|field_collection_item|field_landing_page_item|large_landscape'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_side_info|field_collection_item|field_landing_page_item|stanford_6_col_banner';
  $field_group->group_name = 'group_side_info';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_landing_page_item';
  $field_group->mode = 'stanford_6_col_banner';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Side Info',
    'weight' => '1',
    'children' => array(
      0 => 'field_s_lp_item_description',
      1 => 'group_s_more_link_style',
      2 => 'group_title_wrap',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Side Info',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-side-info field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_side_info|field_collection_item|field_landing_page_item|stanford_6_col_banner'] = $field_group;

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
    'label' => 'Card Style',
    'weight' => '0',
    'children' => array(
      0 => 'field_s_lp_item_description',
      1 => 'group_s_tile_link_style',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Card Style',
      'instance_settings' => array(
        'id' => '',
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
  $field_groups['group_tile_style|field_collection_item|field_landing_page_item|large_landscape'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_wrap|field_collection_item|field_landing_page_item|stanford_6_col_banner';
  $field_group->group_name = 'group_title_wrap';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_landing_page_item';
  $field_group->mode = 'stanford_6_col_banner';
  $field_group->parent_name = 'group_side_info';
  $field_group->data = array(
    'label' => 'Title Wrap',
    'weight' => '2',
    'children' => array(
      0 => 'field_s_lp_item_title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Title Wrap',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-title-wrap field-group-html-element',
        'element' => 'h2',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_title_wrap|field_collection_item|field_landing_page_item|stanford_6_col_banner'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Add/Edit Content');
  t('Advanced');
  t('Arrow link');
  t('Block Style');
  t('Card Link Style');
  t('Card Style');
  t('Circle Style');
  t('Image Border Style');
  t('Image Container');
  t('Image link');
  t('Lead text styles');
  t('Link Style');
  t('More LInk Style');
  t('More Link Style');
  t('Postcard');
  t('Postcard Content');
  t('Postcard Image');
  t('Postcard body');
  t('Side Info');
  t('Title Style');
  t('Title Wrap');
  t('Title link');

  return $field_groups;
}
