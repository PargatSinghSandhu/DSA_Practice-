class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
        int low =0, high = nums.size()-1, mid;


        while(low<=high)
        {
            mid = (low+high)/2;
            if(nums[mid]==target)
            {
                return true;
            }
            if(nums[low]==nums[mid] && nums[mid]==nums[high]) // if we find that the elemtns are same 
                                                            // then it will be hard to identify the sorted half so we do this
            {
                low++;
                high--;
                continue;
            }

            

            if(nums[low]<=nums[mid])

            {
                if(nums[low]<=target && target<=nums[mid])
                {
                    high = mid-1;
                }
                else
                {
                    low = mid+1;
                }
            }
            else
            {
                if(nums[mid]<=target && target<=nums[high])
                {
                    low = mid+1;
                }
                else
                {
                    high = mid-1;
                }
            }
        }
        return false;

    }
};
