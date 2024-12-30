<?php
function thirdMax($nums) {
    $set = array_unique($nums);
    sort($set);
    if (count($set) > 2) {
        return $set[count($set) - 3];
    }
    return $set[count($set) - 1];
}
?>