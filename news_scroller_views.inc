<?php

function view_news_scroller_feed_news() {
  $view = new view;
  $view->name = 'scroller_feed_news';
  $view->description = 'Scrolling news from aggregator feeds';
  $view->tag = 'news_scroller';
  $view->view_php = '';
  $view->base_table = 'aggregator_item';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
      'link' => array(
        'label' => 'Link',
        'alter' => array(
          'alter_text' => 0,
          'text' => '',
          'make_link' => 0,
          'path' => '',
          'link_class' => '',
          'alt' => '',
          'prefix' => '',
          'suffix' => '',
          'help' => '',
          'trim' => 0,
          'max_length' => '',
          'word_boundary' => 1,
          'ellipsis' => 1,
          'strip_tags' => 0,
          'html' => 0,
  ),
        'display_as_link' => 1,
        'exclude' => 0,
        'id' => 'link',
        'table' => 'aggregator_item',
        'field' => 'link',
        'relationship' => 'none',
  ),
      'title' => array(
        'label' => 'Title',
        'alter' => array(
          'alter_text' => 0,
          'text' => '',
          'make_link' => 0,
          'path' => '',
          'link_class' => '',
          'alt' => '',
          'prefix' => '',
          'suffix' => '',
          'help' => '',
          'trim' => 0,
          'max_length' => '',
          'word_boundary' => 1,
          'ellipsis' => 1,
          'strip_tags' => 0,
          'html' => 0,
  ),
        'display_as_link' => 1,
        'exclude' => 0,
        'id' => 'title',
        'table' => 'aggregator_item',
        'field' => 'title',
        'relationship' => 'none',
  ),
      'link_1' => array(
        'label' => 'Link',
        'alter' => array(
          'alter_text' => 0,
          'text' => '',
          'make_link' => 0,
          'path' => '',
          'link_class' => '',
          'alt' => '',
          'prefix' => '',
          'suffix' => '',
          'help' => '',
          'trim' => 0,
          'max_length' => '',
          'word_boundary' => 1,
          'ellipsis' => 1,
          'strip_tags' => 0,
          'html' => 0,
  ),
        'display_as_link' => 1,
        'exclude' => 0,
        'id' => 'link_1',
        'table' => 'aggregator_feed',
        'field' => 'link',
        'relationship' => 'none',
  ),
      'title_1' => array(
        'label' => 'Title',
        'alter' => array(
          'alter_text' => 0,
          'text' => '',
          'make_link' => 0,
          'path' => '',
          'link_class' => '',
          'alt' => '',
          'prefix' => '',
          'suffix' => '',
          'help' => '',
          'trim' => 0,
          'max_length' => '',
          'word_boundary' => 1,
          'ellipsis' => 1,
          'strip_tags' => 0,
          'html' => 0,
  ),
        'display_as_link' => 1,
        'exclude' => 0,
        'id' => 'title_1',
        'table' => 'aggregator_feed',
        'field' => 'title',
        'relationship' => 'none',
  ),
  ));
  $handler->override_option('sorts', array(
      'timestamp' => array(
        'order' => 'DESC',
        'granularity' => 'second',
        'id' => 'timestamp',
        'table' => 'aggregator_item',
        'field' => 'timestamp',
        'relationship' => 'none',
  ),
  ));
  $handler->override_option('filters', array(
      'fid' => array(
        'operator' => '=',
        'value' => array(
          'value' => '1',
          'min' => '',
          'max' => '',
  ),
        'group' => '0',
        'exposed' => FALSE,
        'expose' => array(
          'operator' => FALSE,
          'label' => '',
  ),
        'id' => 'fid',
        'table' => 'aggregator_feed',
        'field' => 'fid',
        'relationship' => 'none',
  ),
  ));
  $handler->override_option('access', array(
      'type' => 'none',
  ));
  $handler->override_option('cache', array(
      'type' => 'none',
  ));

  return $view;
}

function view_news_scroller_custom_news() {
  $view = new view;
  $view->name = 'scroller_custom_news';
  $view->description = '';
  $view->tag = 'news_scroller';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
      'view_node' => array(
        'label' => 'Link',
        'alter' => array(
          'alter_text' => 0,
          'text' => '',
          'make_link' => 0,
          'path' => '',
          'link_class' => '',
          'alt' => '',
          'prefix' => '',
          'suffix' => '',
          'help' => '',
          'trim' => 0,
          'max_length' => '',
          'word_boundary' => 1,
          'ellipsis' => 1,
          'strip_tags' => 0,
          'html' => 0,
  ),
        'text' => '',
        'exclude' => 0,
        'id' => 'view_node',
        'table' => 'node',
        'field' => 'view_node',
        'relationship' => 'none',
  ),
      'nid' => array(
        'label' => 'Nid',
        'alter' => array(
          'alter_text' => 0,
          'text' => '',
          'make_link' => 0,
          'path' => '',
          'link_class' => '',
          'alt' => '',
          'prefix' => '',
          'suffix' => '',
          'help' => '',
          'trim' => 0,
          'max_length' => '',
          'word_boundary' => 1,
          'ellipsis' => 1,
          'strip_tags' => 0,
          'html' => 0,
  ),
        'link_to_node' => 0,
        'exclude' => 0,
        'id' => 'nid',
        'table' => 'node',
        'field' => 'nid',
        'relationship' => 'none',
  ),
      'title' => array(
        'label' => 'Title',
        'alter' => array(
          'alter_text' => 0,
          'text' => '',
          'make_link' => 0,
          'path' => '',
          'link_class' => '',
          'alt' => '',
          'prefix' => '',
          'suffix' => '',
          'help' => '',
          'trim' => 0,
          'max_length' => '',
          'word_boundary' => 1,
          'ellipsis' => 1,
          'strip_tags' => 0,
          'html' => 0,
  ),
        'link_to_node' => 0,
        'exclude' => 0,
        'id' => 'title',
        'table' => 'node',
        'field' => 'title',
        'relationship' => 'none',
  ),
  ));
  $handler->override_option('sorts', array(
      'sticky' => array(
        'order' => 'DESC',
        'id' => 'sticky',
        'table' => 'node',
        'field' => 'sticky',
        'relationship' => 'none',
  ),
      'created' => array(
        'order' => 'DESC',
        'granularity' => 'second',
        'id' => 'created',
        'table' => 'node',
        'field' => 'created',
        'relationship' => 'none',
  ),
  ));
  $handler->override_option('filters', array(
      'created' => array(
        'operator' => '>',
        'value' => array(
          'type' => 'offset',
          'value' => '-2 weeks',
          'min' => '',
          'max' => '',
  ),
        'group' => '0',
        'exposed' => FALSE,
        'expose' => array(
          'operator' => FALSE,
          'label' => '',
  ),
        'id' => 'created',
        'table' => 'node',
        'field' => 'created',
        'relationship' => 'none',
  ),
      'status' => array(
        'operator' => '=',
        'value' => '1',
        'group' => '0',
        'exposed' => FALSE,
        'expose' => array(
          'operator' => FALSE,
          'label' => '',
  ),
        'id' => 'status',
        'table' => 'node',
        'field' => 'status',
        'relationship' => 'none',
  ),
      'type' => array(
        'operator' => 'in',
        'value' => array(
          'news_item' => 'news_item',
  ),
        'group' => '0',
        'exposed' => FALSE,
        'expose' => array(
          'operator' => FALSE,
          'label' => '',
  ),
        'id' => 'type',
        'table' => 'node',
        'field' => 'type',
        'relationship' => 'none',
  ),
  ));
  $handler->override_option('access', array(
      'type' => 'none',
  ));
  $handler->override_option('cache', array(
      'type' => 'none',
  ));

  return $view;
}