class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        int n = candidates.size();
        vector<int> sub;
        vector<vector<int>>ans;
        comb(0, target, candidates, sub, ans, n);
        return ans;
 
        
      
    }


    void comb(int index, int target, vector<int>& candidates, vector<int> & sub,  vector<vector<int>>&ans, int n)
    {
        if(target==0)
        {
            ans.push_back(sub);
            return;
        }
        else if(index==n)
        {
            return;
        }
        
        if(candidates[index]<=target)
        {
            sub.push_back(candidates[index]);
            comb(index, target-candidates[index], candidates, sub, ans, n);
            sub.pop_back();
            
        }
        comb(index+1, target, candidates, sub, ans,n);
    }


};
