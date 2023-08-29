class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        

        
        vector<int>subset;
        vector<vector<int>>res;
        sub(0, nums,subset,res );
        return res;

    }

    void sub(int index, vector<int>& nums, vector<int>& subset, vector<vector<int>>& result)
    {
        if(index==nums.size())
        {
            result.push_back(subset);
            return;
        }

        subset.push_back(nums[index]);
        sub(index+1, nums, subset,result);
        subset.pop_back();

        sub(index+1, nums, subset, result);
    }
};
