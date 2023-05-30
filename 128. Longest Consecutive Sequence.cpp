class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int current_count = 0;
        int last_smaller = INT_MIN;
        int longest = 1 ;
        int n= nums.size();
        sort(nums.begin(), nums.end());
        if(n==0)
        {          
            return 0;
        }
        for(int i=0;i<n;i++)
        {   
            int k = last_smaller+1;
            if(nums[i]==k)
            {
                current_count++;
                //longest++;
                last_smaller = nums[i];
            }
            //k=0;
            else if(nums[i]!=last_smaller)
            {
                current_count=1;
                last_smaller = nums[i];
                //longest++;

            }
            longest = max(longest,current_count);
        }
        return longest;

    }
};
