class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while(low<=high)
        {
            int mid = (low+high)/2;

            if(weightss(weights, mid)<=days)
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        return low;
    }

    int weightss(vector<int>& weights, int mid)
    {
        int total = 0, numdays=1;
        for(int i=0;i<weights.size(); i++)
        {
            
            if((total+weights[i])>mid)
            {
                numdays+=1;
                total = weights[i];
            }
            else
            {
                total+=weights[i];
            }
        }
        return numdays;
    }
};
