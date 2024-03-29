class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        

        vector<vector<int>> ans;
        vector<int>ds;
        int n = nums.size();
        int freq[n];
        for(int i=0;i<nums.size();i++)
        {
            freq[i]=0;
        }

        recurPerm(ds, nums, freq, ans);
        return ans;

    }

    void recurPerm(vector<int> &ds, vector<int>&nums, int freq[], vector<vector<int>> & ans)
    {
        if(ds.size()==nums.size())
        {
            ans.push_back(ds);
            return;
        }


        for(int i=0;i<nums.size();i++)
        {
            if(!freq[i])
            {
                ds.push_back(nums[i]);
                freq[i]=-1;
                recurPerm(ds, nums, freq, ans);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
};
