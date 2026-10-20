class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxDelta=0;
        for (int i=0; i<prices.size()-1; ++i){
            int pToday = prices[i];
            for (int j=i+1; j<prices.size(); ++j){
                maxDelta=std::max(maxDelta, prices[j]-pToday);
            }
        }
        return maxDelta;
    }
};
