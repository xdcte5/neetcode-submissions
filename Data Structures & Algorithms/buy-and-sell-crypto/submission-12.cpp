class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0){
            return 0;
        }
        int minSoFar = prices[0];
        int maxDelta=0;
        for (int i=0; i<prices.size(); ++i){
            minSoFar=std::min(minSoFar, prices[i]);
            maxDelta=std::max(maxDelta, prices[i]-minSoFar);
        }
        return maxDelta;
    }
};
