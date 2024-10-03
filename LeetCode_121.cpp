class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Brute Force Aproach
        // int maxProfit=0;
        // for(int i=0;i<prices.size();i++){
        //     for(int j=i+1;j<prices.size();j++){
        //         if(prices[j]-prices[i]>0){
        //             maxProfit=max(maxProfit,prices[j]-prices[i]);
        //         }
        //     }
        // }
        // return maxProfit;

        //Optimized Approach
        int maxProfit=0;
        int n=prices.size();
        int maxRight=prices[n-1];
        for(int i=n-2;i>=0;i--){
            maxRight=max(maxRight,prices[i]);
            maxProfit=max(maxProfit,maxRight-prices[i]);
        }
        return maxProfit;
    }
};
