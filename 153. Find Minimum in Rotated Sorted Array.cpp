class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int size = nums.size();
        int low =0, high = size-1, ans = INT_MAX, mid;

        while(low<=high)
        {
            mid = (low+high)/2;

            if(nums[low]<=nums[mid])             //left is sorted 
            {
                ans = min(ans, nums[low]);
                low = mid+1;
            }
            else                                //right is sorted
            {
                ans=min(ans, nums[mid]);
                high = mid-1;
            } 
        }
        return ans;

    }
};
