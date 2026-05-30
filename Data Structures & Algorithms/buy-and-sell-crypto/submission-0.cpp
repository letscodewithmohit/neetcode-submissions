class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sell = 0;
        int maxsell = 0;

        for(int i=0; i<prices.size(); i++){
           for(int j=i+1; j<prices.size(); j++){
            int diff = prices[j] - prices[i];
            if( diff > sell){
                sell = diff;
                maxsell = max(sell,maxsell);
            }
           }
        }
        return maxsell;
    }
};
