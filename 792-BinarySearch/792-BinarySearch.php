// Last updated: 5/10/2026, 11:50:00 PM
class Solution {

    /**
     * @param Integer[] $nums
     * @param Integer $target
     * @return Integer
     */
    function search($nums, $target) {
        $j = count($nums)-1;
        $i = 0;
        while($i <= $j){
            $mid = floor(($i + $j) / 2); 
            if($nums[$mid] == $target) return $mid;
            else if($nums[$mid] < $target) $i = $mid+1;
            else $j = $mid-1;
        }
        return -1;
    }
}