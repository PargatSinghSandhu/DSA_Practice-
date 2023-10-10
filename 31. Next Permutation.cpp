class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n = nums.size();
        int index = -1;

        // we have to find the dip, where the value is decreasding.

        for(int i = n-2; i >=0; i--)
        {
            if(nums[i]<nums[i+1])
            {
                index = i;
                break;
            }
        }

        if(index ==-1) // there is no dip, so the next greatest order will be reverse of the order.
        {
            reverse(nums.begin(), nums.end());
            return;

        } 
        // we have found the dip, now we to replace that dip with the smallest number picking from the rest elemetns.

        for(int i = n-1;i>index;i--)
        {
            if(nums[index]<nums[i])
            {
                swap(nums[i], nums[index]);
                break;
            }
        }

        reverse(nums.begin()+index+1, nums.end());
        return;



    }
};
