class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minbuy=INT_MAX;
        int maxpro=0;
        for(int i=0;i<prices.size();i++){
            minbuy=min(minbuy,prices[i]);
            maxpro=max(maxpro,prices[i]-minbuy);
        }
        return maxpro;
    }
};
