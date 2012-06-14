<?php

function news_scroller_perm() {
  return array(
    'administer news scroller settings',
  );
}

function news_scroller_menu() {
  $items = array();

  $items['admin/settings/news_scroller'] = array(
    'title' => 'News Scroller',
    'page callback' => 'drupal_get_form',
    'page arguments' => array('news_scroller_admin_settings_form'),
    'access arguments' => array('administer news scroller settings'),
  );

  return $items;
}


function news_scroller_theme()
{
  $theme = array();

  $theme['news_scroller'] = array('arguments' => array());

  return $theme;
}

function news_scroller_views_default_views() {
  $views = array();

  $views['scroller_feed_news'] = view_news_scroller_feed_news();
  $views['scroller_custom_news'] = view_news_scroller_custom_news();

  return $views;
}


function news_scroller_block($op = 'list', $delta = 0, $edit = array())
{
  switch($op) {
    case 'list':
      $blocks[0]['info'] = t('News Scroller Marquee');
      return $blocks;
    case 'view':
      if ($delta == 0) {
        $block['content'] = theme('news_scroller');
      }
      return $block;
  }
}