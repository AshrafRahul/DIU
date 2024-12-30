<?php

function threeSum($nums) {
    $n = count($nums);
    $result = [];

    if ($n < 3) return $result;

    sort($nums);

    for ($i = 0; $i < $n - 2; $i++) {
        if ($i > 0 && $nums[$i] == $nums[$i - 1]) continue;

        $l = $i + 1;
        $r = $n - 1;

        while ($l < $r) {
            $sum = $nums[$i] + $nums[$l] + $nums[$r];

            if ($sum == 0) {
                $result[] = [$nums[$i], $nums[$l], $nums[$r]];
                while ($l < $r && $nums[$l] == $nums[$l + 1]) $l++;
                while ($l < $r && $nums[$r] == $nums[$r - 1]) $r--;
                $l++;
                $r--;
            } elseif ($sum < 0) $l++;
            else $r--;
        }
    }

    return $result;
}