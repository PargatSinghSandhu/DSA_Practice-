class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        

        int n=nums.size();
        vector<vector<int>>ans;
        sub(0, ans,nums,n );
        return ans;

    }

    vector<vector<int>> sub (int ind, vector<int>&ans, vector<int>nums, int n)
    {
        if(ind==n)
        {
            for(auto it: ds)
            {
                cout<<it<<" ";
                
            }
            cout<<end;
            return;
        }

        ans.push_back(nums[ind]);
        sub(ind+1, ans, nums,n);
        ans.pop_back();

        sub(ind+1, ans, nums, n);
    }
};
