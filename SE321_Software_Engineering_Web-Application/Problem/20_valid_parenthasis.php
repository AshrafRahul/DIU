<?php
function isValid($s) {
    $stack = [];
    $pairs = ['(' => ')', '[' => ']', '{' => '}'];

    foreach (str_split($s) as $char) {
        if (isset($pairs[$char])) {
            array_push($stack, $char); 
        } elseif (!empty($stack) && $char === $pairs[array_pop($stack)]) {
            continue; 
        } else {
            return false; 
        }
    }

    return empty($stack); 
}
?>