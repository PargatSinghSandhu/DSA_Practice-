class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int d=k%nums.size();
        vector<int>temp;
        int n = nums.size();

        for(int i=0;i<d;i++)
        {
            temp.push_back(nums[(n-d)+i]);
        }
        for(int i = n-1;i>=d;i--) // when you do rotate right, go from end to begining., in left, go from begining to end.
        {
            nums[i]=nums[i-d];
        }
        
        for(int i=0;i<d;i++)
        {
            nums[i]=temp[i];
        }
    }
};
