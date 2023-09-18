class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int d = k%nums.size(), n = nums.size();
        vector<int>temp;

        for(int i=0;i<d;i++)
        {
            temp.push_back(nums[(n-d)+i]);
        }

        for (int i = n - 1; i >= d; i--) 
        {
            nums[i] = nums[i - d];
        }
        
        int p=0;

        for(int r = 0;r<d;r++)
        {
            nums[r]=temp[p];
            p++;
        }
    }};
