class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int sell = 0;
        // int maxsell = 0;

        // for(int i=0; i<prices.size(); i++){
        //    for(int j=i+1; j<prices.size(); j++){
        //     int diff = prices[j] - prices[i];
        //     if( diff > sell){
        //         sell = diff;
        //         maxsell = max(sell,maxsell);
        //     }
        //    }
        // }
        // return maxsell;

        // USING TWO POINTER

        int buy = 0;
        int sell = 1;
        int maxP = 0;
    

        while(sell < prices.size()){
          if(prices[buy] < prices[sell]){
            int profit = prices[sell] - prices[buy];
             maxP = max(maxP,profit);
          }else{
            buy = sell;
          }
          sell++;
        }
        return maxP;
    }
};
