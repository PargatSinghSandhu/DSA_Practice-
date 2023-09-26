class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        sort(candidates.begin(), candidates.end());
        vector<int> ds;
        vector<vector<int>> ans;
        comb(ds, ans, 0, target, candidates);
        return ans;     
    }

    void comb(vector<int> &ds,vector<vector<int>> &ans, int index, int target, vector<int>& candidates )
    {
        if(target==0)
        {
            ans.push_back(ds);
            return;
        }

        for(int i=index;i<candidates.size();i++)
        {
                if(i>index&&candidates[i]==candidates[i-1])continue; // index is first element of every loop, which we have to consider, otherwise we'll loose the combination. 
                if(candidates[i]>target)break;
                ds.push_back(candidates[i]);
                comb(ds, ans, i+1, target-candidates[i], candidates); // i instead of index.
                ds.pop_back();
            
        }
    }
};
