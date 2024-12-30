<?php
function maxProfit($prices) {
    $minPrice = $prices[0];
    $maxProfit = 0;
    for ($i = 1; $i < count($prices); $i++) {
        if ($prices[$i] < $minPrice) {
            $minPrice = $prices[$i];
        } elseif ($prices[$i] - $minPrice > $maxProfit) {
            $maxProfit = $prices[$i] - $minPrice;
        }
    }
    return $maxProfit;
}
?>