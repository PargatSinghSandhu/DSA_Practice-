class Solution {
public:
    int fib(int n) {
        
        vector<int> dp(n+1,-1);
        return fi(n, dp);
        


    }
    int fi(int n, vector<int> &dp)
    {
        if(n<=1)
        {
            return n;
        }

        if(dp[n]!=-1)
        {
            return dp[n];
        }

        return dp[n] = fi(n-1, dp)+fi(n-2,dp);

    }        
};
