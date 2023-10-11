class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        set<vector<int>>ans;     
        perm(nums,ans, 0 );
        vector<vector<int>> anss (ans.begin(), ans.end());
        return anss;
    }

    void perm(vector<int>& nums, set<vector<int>> &ans, int index)
    {   
        int n = nums.size();
        
        if(index==n)
        {
            ans.insert(nums);
            return;
        }

        for(int i = index;i<n;i++)
        {
            swap(nums[index], nums[i]);
            perm(nums, ans, index+1);
            swap(nums[index], nums[i]);
        }


    }
};
