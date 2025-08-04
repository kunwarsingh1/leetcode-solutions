class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX;
        int maxProfit = 0;
        for(auto price:prices){
            if (price < min) {
                min = price;
            } else if (price - min > maxProfit) {
                maxProfit = price - min; 
            }
        }

        return maxProfit;

    }
};