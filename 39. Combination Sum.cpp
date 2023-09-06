class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        int n = candidates.size();
        vector<int> ds;
        findcomb(0, n, ans, candidates, target, ds);
        return ans;

        
    }



    void findcomb(int index, int n, vector<vector<int>> &ans, vector<int> &candidates, int target,vector<int> &ds )
    {
        
        if(index==n)
        {
            if(target==0)
            {
                ans.push_back(ds);
            }
            return;
        }


        if(candidates[index]<=target)
        {

            ds.push_back(candidates[index]);
            findcomb(index, n, ans, candidates, target-candidates[index], ds);
            ds.pop_back();

        }
        findcomb(index+1, n, ans, candidates, target, ds);
    }



};
