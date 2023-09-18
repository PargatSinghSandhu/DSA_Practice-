class Solution {
public:
    void rotate(vector<int>& nums, int k) {

         k = k%nums.size();
         reverse(nums.begin(), nums.begin()+(nums.size()-k));   // nums.begin = 0, nums.begin()+(nums.size()-k) = 4, it will run 0-3
         reverse(nums.begin()+(nums.size()-k), nums.end());
         reverse(nums.begin(), nums.end());
        
    }
};
