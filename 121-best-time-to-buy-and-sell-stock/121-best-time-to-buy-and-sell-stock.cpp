class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int min = INT_MAX, profit = 0;
        for(int i=0; i<size; i++){
            if(min>prices.at(i)) min = prices.at(i);
            profit = max(profit, prices.at(i) - min);
        }
        return profit;
    }
};