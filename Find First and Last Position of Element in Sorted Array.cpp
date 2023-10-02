class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    
        vector<int>ans;
        int fi= first(nums, target);
        int la = last(nums, target);
        ans.push_back(fi);
        ans.push_back(la);
        return ans;
    }


    int first(vector<int>& nums, int target)
    {

        int n = nums.size();
        
        int low = 0, high = n-1;
        int  ceil=-1, mid;
        vector<int>ans;

        while (low<=high)
        {
            mid = (high+low)/2;
            
            if(nums[mid]==target)
            {
                ceil = mid;
                high = mid-1;
            }
            
            else if(nums[mid]>target)
            {
                high = mid-1;
                
            }
            else 
            {
                low = mid+1;
            }
        }
        
        
        return ceil;

    }

    int last(vector<int>& nums, int target)
    {
        int n = nums.size();
        
        int low = 0, high = n-1;
        int floor=-1, mid;
        vector<int>ans;

        while(low<=high)
        {
            mid = (low+high)/2;

            if(nums[mid]==target)
            {
                floor = mid;
                low = mid+1;
            }
            else if(nums[mid]>target)
            {
                high = mid-1;
                
            }
            else 
            {
                low = mid+1;
            }
          
        }
       return floor; 
    }
    
};
