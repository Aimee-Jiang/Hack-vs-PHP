function find_max_and_index(array<float> $nums): (int, float) {
  $max = -INF;
  $max_index = -1;
  foreach ($nums as $index => $num) {
    if ($num > $max) {
      $max = $num;
      $max_index = $index;
    } 
  }
  return tuple($max_index, $max);
}
