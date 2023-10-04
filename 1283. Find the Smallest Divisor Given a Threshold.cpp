class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int low = 1;
        int high = *max_element(nums.begin(), nums.end()), ans;
        while(low<=high)
        {
            int mid = (low+high)/2;
            cout<<mid<<" ";
            if(small(nums, mid)<=threshold)
            {
                ans= mid;
                high = mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
        
    }

       int small(vector<int>& nums, int divisor)
        {
            int total = 0;
            for(int i = 0; i<nums.size();i++)
            {
                total+= ceil((double)nums[i]/(double)divisor);
            
            }
            return total;
        }

};
