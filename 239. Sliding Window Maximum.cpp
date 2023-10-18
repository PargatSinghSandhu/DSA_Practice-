class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        int n = nums.size();
        vector<int> ans;
        deque<int> dq; // it can push and pop from front and back as well.

        for(int i = 0 ;i<n;i++)
        {   
            if(!dq.empty() && dq.front() == i-k) dq.pop_front();

            while(!dq.empty() && nums[dq.back()]<nums[i]) //we have to maintain the decreasing order, if not remove the element
            {
                dq.pop_back();
            }

            dq.push_back(i);

            if(i>=k-1) ans.push_back(nums[dq.front()]);

        }
        return ans;
    }
};
