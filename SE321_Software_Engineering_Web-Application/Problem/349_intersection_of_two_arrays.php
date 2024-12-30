<?php
function intersection($nums1, $nums2) {
    $arr = array_fill(0, 1001, 0);
    $result = [];
    foreach ($nums1 as $num) {
        $arr[$num] = 1;
    }
    foreach ($nums2 as $num) {
        if ($arr[$num] === 1) {
            $arr[$num] = 2;
        }
    }
    for ($i = 0; $i <= 1000; $i++) {
        if ($arr[$i] === 2) {
            $result[] = $i;
        }
    }
    return $result;
}
?>