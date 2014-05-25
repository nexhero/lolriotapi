<?php
/**

  @return
    The region

*/
function lol_api_region($region){
  switch ($region) {
    case 0:
      $region='br';
      break;
    case 1:
      $region='eune';
      break;
    case 2:
      $region='euw';
      break;
    case 3:
      $region='na';
      break;
    case 4:
      $region='tr';
      break;

    default:
      $region='na';
      break;
  }
  return $region;
}
