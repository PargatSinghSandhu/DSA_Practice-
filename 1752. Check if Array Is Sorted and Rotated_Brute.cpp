class Solution 
{
public:
    bool check(vector<int>& nums)
    {
       vector<int> numsbp = nums;
       sort(numsbp.begin(), numsbp.end());

       if(nums==numsbp)
       {
           return true;
       }

       for(int i =1; i< nums.size();i++)
       {
           int p = 1;
           vector<int> numsb = nums;
           sort(numsb.begin(), numsb.end());
           while (p <= i) 
           {
                int last = numsb[0];
                for (int i = 0; i < numsb.size() - 1; i++) 
                {
                    numsb[i] = numsb[i + 1];
                }
                numsb[numsb.size() - 1] = last;
                p++;
            }

           if(numsb==nums)
           {
               return true;
           }

       }
       return false;
        
    }
};


