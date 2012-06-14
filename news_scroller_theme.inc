<?php

function theme_news_scroller() {
  $path = drupal_get_path('module', 'news_scroller');
  drupal_add_js($path . '/jquery.marquee.js');

  $limit = variable_get('news_scroller_item_count', 5);
  $items = news_scroller_get_news();
  $items = array_slice($items, 0, $limit);

  $output = '';
  $output .= '<div id="news-scroller">';
  $output .= '<div id="news-scroller-inner">';
  $output .= '<marquee behavior="scroll" scrollamount="3" direction="left">';
  $output .= '<span>';
  $output .= '<span class="opening">' . t(variable_get('news_scroller_intro', '')) . '</span>';
  foreach ($items as $item) {
    $output .= l($item['title'], $item['link'], array('attributes' => array('target' => $item['target'])));
  }
  $output .= '</span>';
  $output .= '</marquee>';
  $output .= '</div>';
  $output .= '</div>';

  return $output;
}