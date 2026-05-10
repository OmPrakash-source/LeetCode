// Last updated: 5/10/2026, 11:45:31 PM
class Solution {

    /**
     * @param Integer[] $nums
     * @return Integer
     */
    function maximumCount($nums) {
        $posi = 0;
        $nagi = 0;
        for($i=0; $i<count($nums); $i++){
            if($nums[$i] < 0) $nagi++;
            else if($nums[$i] > 0) $posi++;
            else continue;
        }
        return max($posi,$nagi);
    }
}