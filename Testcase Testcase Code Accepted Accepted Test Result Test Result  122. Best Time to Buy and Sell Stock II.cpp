class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n, vector<int> (2, -1));
        return stock(0,1, prices, n, dp);
    }

    long stock (int index, int buy, vector<int> & prices, int n,vector<vector<int>> &dp) //because value of profit can be very maximum
    {
        long profit = 0;

        if(index==n) // when he buys the stock at the last day, then ther is no hope to sell the stock
        {
            return 0;
        }
        if(dp[index][buy]!=-1) return dp[index][buy]; // this will store the value in which we already got the value through the recursion. 

        if(buy)
        {
            profit = max(-prices[index] + stock(index+1, 0, prices, n, dp), //take
            0+stock(index+1, 1, prices, n,dp));// not take
        } // if the stock is at the buy, the the cost is added to the total amount, so it is in the negative,
        //and aftet than either we can sell it or not,
        //for sell it stock(index+1, and buy turns to 0 for not selling it is buy =1);

        // -prices[index] = buy on that day and then stock(index+1, 0, prices, n, dp) = sell on the next day 
        // 0=not interested to buy, and stock(index+1,1,prices,n,dp)=next day I have the chance to buy.


        else
        {
            profit = max(prices[index] + stock (index+1, 1, prices, n,dp), 0+stock(index+1, 0, prices, n,dp));
        }
        //if the stock is being sold, then if it wants to buy for another stock then index+1,1 , if not then the index+1, 0 

        //here it is "+" because we are selling so it is the profit,
        //max[prices] = selling the stock,
        // stock (index+1, 1, prices, n,dp) - case 1: If I sold the previously then I still have liberty to buy the stock
        //0 Dont't sell it
        //so nextstock(index+1, 0, prices, n,dp) i stll have no loberty to buy 
        return dp[index][buy]=profit; // this will return the profit using the dp. 
    }
};
