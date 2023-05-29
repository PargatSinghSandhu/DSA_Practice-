class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) 
    {
        vector <int> ans;
        int n=arr.size();
        
        if(n==1)
        {
           ans.push_back(-1);
           return ans;
        }
        ans.push_back(-1);
        int maxi= arr[n-1];
        ans.push_back(maxi);

        for(int i = n-2;i>0;i--)
        {
            if(arr[i]>=maxi)
            {
                ans.push_back(arr[i]);
                maxi=arr[i];
            }
            else
            {
                ans.push_back(maxi);
            }
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};
