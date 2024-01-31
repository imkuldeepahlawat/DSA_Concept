class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int sellDay[n];
        // suffix
        sellDay[n-1] = prices[n-1];
        for (int i = n-2;i>= 0;i--){
            sellDay[i] = max(sellDay[i+1], prices[i+1]);
        }
        int profit = 0;
        for (int i = 0; i< n;i++){
            profit = max(sellDay[i]-prices[i],profit);
        }
        return profit;
    }
};
/*------------------------*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int buyDay = prices[0];
        for(int i = 1;i<prices.size();i++){
            if(prices[i] <buyDay){
               buyDay = prices[i];
            }

            if(prices[i] > buyDay){
                profit = max(profit,prices[i]-buyDay);
            }
        }
        

        return profit;
    }
};
