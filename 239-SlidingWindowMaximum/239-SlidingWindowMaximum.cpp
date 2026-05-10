// Last updated: 5/10/2026, 11:52:07 PM
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        deque<int>q;
        for(int i=0; i<k; i++){
            // choti val ko pop kalna hai last se 
            while(!q.empty() && nums[i] >= nums[q.back()]){
                q.pop_back(); //kyoki last val choti hai 
            }
            q.push_back(i);
        }

        ans.push_back(nums[q.front()]);

        for(int i = k;i<nums.size();i++){
            // out of bound
            if(!q.empty() && i-q.front() >= k){
                q.pop_front();
            }
            // choti value process
            while(!q.empty() && nums[i] >= nums[q.back()]){
                q.pop_back();
            }
            // fir agar OFB nhi hai or val badi hai to push karna hai 
            q.push_back(i);
            
            //last me ans ko push krna hai 
            ans.push_back(nums[q.front()]);
        }
        return ans;
    }
};