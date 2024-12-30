<?php
function majorityElement($nums) {
    $map = [];
    foreach ($nums as $num) {
        if (!isset($map[$num])) {
            $map[$num] = 0;
        }
        $map[$num]++;
        if ($map[$num] > floor(count($nums) / 2)) {
            return $num;
        }
    }
}
?>