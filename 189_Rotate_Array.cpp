class Solution 
{
public:
    void rotate(vector<int>& nums, int k) 
    {
        {
    int i=0, rotate1=k;
    
    while(rotate1!=0)
    {
        int s= nums.size();
        int temp = nums[s-1];
        for(i=s-1;i>0;i--)
        {
        nums[i]=nums[i-1];
        
        }
        nums[i]=temp;
        rotate1--;
        for(int j=0;j<s;j++)
        {
           cout<<nums[j]<<" ";
        }
    
        
    }    
     
   }
 }   
};
