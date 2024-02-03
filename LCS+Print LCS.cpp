class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        
        vector<vector<int>> dp(n+1,vector<int>(m+1, 0));

        for(int i=0 ; i<=n; i++)
        {
            dp[i][0]=0;
        }
        for(int i=0;i<=m;i++)
        {
            dp[0][i]=0;
        }

        for(int ind1 = 1;ind1<=n ; ind1++)
        {
            for(int ind2 =1 ; ind2<=m; ind2++)
            {
                if(text1[ind1-1]==text2[ind2-1])
                {
                    dp[ind1][ind2] = 1+dp[ind1-1][ind2-1];
                }
                else
                {
                    dp[ind1][ind2]=max(dp[ind1-1][ind2], dp[ind1][ind2-1]);
                }
            }
        }

        int len = dp[n][m], index = len-1, o=n,p=m;
        string s = "";

        for (int k = 0; k < len; k++) 
        {
            s += "$"; // dummy string
        }

        while(o>0 && p>0)
        {
            if(text1[o-1]==text2[p-1])
            {
                s[index]=text1[o-1];
                index--;
                o--;
                p--;
            }
            else if(dp[o][p-1]>dp[o-1][p])
            {
                p--;
            }
            else 
            {
                o--;
            }
        }
        cout<<s;

        
        return dp[n][m];
    }
};

