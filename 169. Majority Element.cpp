class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count =0, element;

        for(int i = 0;i<nums.size();i++)
        {
            if(count == 0)
            {
                count++;
                element = nums[i];
            }
            else if(nums[i]==element)
            {
                count++;
            }
            else
            {
                count--;
            }
            
        }
        int count1=0;
        for(int i = 0; i<nums.size();i++)
        {
            if(nums[i]==element);
            count1++;
        }
        if(count1>nums.size()/2)
        {
            return element;
        }
        else
        return -1;
        
    }
};
