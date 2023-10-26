class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int n=  nums.size();
        if(n==1) return 0; // if size is 1 then return that single element/index
        if(nums[0]>nums[1]) return 0;  //if the first element is greater than the second element then return first inde, no need to go further
        if(nums[n-1]>nums[n-2]) return n-1; // if the last element is greater than the seond last return the last element.

        int low = 1, high = nums.size()-2, mid;

        while(low<=high)
        {
            mid = (low+high)/2;

            if(nums[mid-1]<nums[mid] && nums[mid]>nums[mid+1])
            {
                return mid;
            }
            if( nums[mid-1]< nums[mid] && nums[mid] < nums[mid]<nums[mid+1])
            {
                
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        return -1;
    }
};
