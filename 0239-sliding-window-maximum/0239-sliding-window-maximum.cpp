class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;

        int i = 0, j = 0, n = nums.size();

// Approach 1 ---------------------


        // deque<int>q;
        // for(int i=0; i<k; i++){
        //     // choti val ko pop kalna hai last se 
        //     while(!q.empty() && nums[i] >= nums[q.back()]){
        //         q.pop_back(); //kyoki last val choti hai 
        //     }
        //     q.push_back(i);
        // }

        // ans.push_back(nums[q.front()]);

        // for(int i = k;i<nums.size();i++){
        //     // out of bound
        //     if(!q.empty() && i-q.front() >= k){
        //         q.pop_front();
        //     }
        //     // choti value process
        //     while(!q.empty() && nums[i] >= nums[q.back()]){
        //         q.pop_back();
        //     }
        //     // fir agar OFB nhi hai or val badi hai to push karna hai 
        //     q.push_back(i);
            
        //     //last me ans ko push krna hai 
        //     ans.push_back(nums[q.front()]);
        // }


// Appraoch 2 ---------------------


        // while(j < n){
        //     if(j-i+1 < k){
        //         j++;
        //     }
        //     else if((j - i + 1) == k){
        //         int maxi =  *max_element(nums.begin() + i, nums.begin()+j+1);
        //         ans.push_back(maxi);
        //         i++;
        //         j++;
        //     }
        // }

// Approach 3 ---------------------
        priority_queue<pair<int,int>>q;
        while(j < n){
            q.push({nums[j], j});
            if((j-i+1) == k){
                while(q.top().second < i) q.pop();
                ans.push_back(q.top().first);
                i++;
            }
            j++;
        }
        return ans;
    }
};