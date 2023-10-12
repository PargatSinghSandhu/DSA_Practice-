class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> ans;
        vector<int>ds;
        comb(0, target, ans, candidates,ds);
        return ans;
    }

    //will pick one element and if that doesn't satisy the condition will pick another, increament the index
    void comb(int index, int target, vector<vector<int>> & ans, vector<int>& candidates, vector<int>&ds )
    {
        
        if(target == 0) //if target reaches to 0, then we can add the vector, because size does'nt matter so there can be any size of vector can be added 
        {
            ans.push_back(ds);
            return;
        }
        else if(index==candidates.size()) //if index reaches to size of the nums vector but does'nt shows target ==0 
        {
            return;
        }


        if(candidates[index]<=target)  // check every element if its less than the target
        {
            ds.push_back(candidates[index]);    // if less than the target then the element adds in the vector
            comb(index, target-candidates[index], ans, candidates,ds); //call the recursive function
            ds.pop_back();

        }
        comb(index+1, target, ans, candidates,ds);  // if the upper condition isn't passed then we move to another index and check again the another element.

    }
};
