<?php
function isAnagram($s, $t) {
    $countS = array_fill(0, 26, 0);
    $countT = array_fill(0, 26, 0); 
    for ($i = 0; $i < strlen($s); $i++) {
        $countS[ord($s[$i]) - ord('a')]++;
    }
    for ($i = 0; $i < strlen($t); $i++) {
        $countT[ord($t[$i]) - ord('a')]++;
    }
    for ($i = 0; $i < 26; $i++) {
        if ($countS[$i] !== $countT[$i]) {
            return false;
        }
    }
    return true;
}
?>