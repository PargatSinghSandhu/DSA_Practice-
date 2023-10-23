class Solution {
public:
    bool check(vector<int>& nums) {
        int count =0;
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i]>nums[(i+1)%nums.size()]) // check increasing order, this condition is for decreasingorder 
            {
                count++;
            }
        }
        return count<=1;
    }
};
