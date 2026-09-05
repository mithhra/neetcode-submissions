class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cheap=prices[0];
        int mx=0;
        for(int i=0;i<prices.size();i++){
            cheap = min(cheap,prices[i]);
            int profit = prices[i] - cheap;
            mx = max(mx, profit);
        }
        return mx;
    }
};
