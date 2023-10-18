class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        

        sort(nums.begin(), nums.end());

        vector<vector<int>>ans;

        int n = nums.size();
        for(int i = 0; i<n; i++)
        {
            if(i>0 && nums[i]==nums[i-1])continue;
            
            for(int j = i+1; j<n ; j++)
            {
                if(j>i+1 && nums[j]==nums[j-1]) continue;

                int l = j+1;
                int k = n-1;

                
                while(l<k)
                {
                    long long sum = nums[i];
                    sum = sum+nums[j]+ nums[k]+nums[l]; // it divided this into two steps because in one step it is not possible to sum this much big number. 
                    if(sum>target)
                    {
                        k--;
                    }
                    else if(sum<target)
                    {
                        l++;
                    }
                    else
                    {
                        ans.push_back({nums[i], nums[j], nums[k], nums[l]});

                        k--;
                        l++;

                        while(l<k && nums[l]==nums[l-1])l++;
                        while(l<k && nums[k]==nums[k+1]) k--;

                    }
                }
            }
        }

        return ans;
    }
};
