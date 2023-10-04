class Solution {
public:
    int minDays(vector<int>& bloomDay, int p, int q) {
        
        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        long long n = bloomDay.size(), ans;
        long long m = p, k=q;

        if(m*k>n) return -1;

        while(low<=high)
        {
            int mid = (low+high)/2; 

            if(possible(bloomDay, m, k, mid)==true)
            {
                ans = mid;
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }


        }
        return ans;
    }

    bool possible(vector<int>& bloomDay, int m, int k, int day)
    {
        int n = bloomDay.size(), count=0, total_bou=0;

        for(int i=0;i<=n-1;i++)
        {
            if(bloomDay[i]<=day)
            {
                count++;
            }
            else
            {
                total_bou+=(count/k);
                count=0;
            }
            //if(total_bou>=m) return true;
        }
        total_bou+=(count/k);
        if(total_bou>=m) return true;
        else return false;
    }

};
