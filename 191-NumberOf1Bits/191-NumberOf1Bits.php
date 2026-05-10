// Last updated: 5/10/2026, 11:52:44 PM
class Solution {

    /**
     * @param Integer $n
     * @return Integer
     */
    function hammingWeight($n) {
        $count = 0;
        while ($n > 0) {
            if ($n % 2 == 1) $count++;
            $n = intdiv($n, 2);
        }
        return $count;
    }
}