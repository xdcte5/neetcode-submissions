class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minSoFar = prices[0];
        int maxDelta=0;
        for (int i; i<prices.size(); ++i){
            minSoFar=std::min(minSoFar, prices[i]);
            maxDelta=std::max(maxDelta, prices[i]-minSoFar);
        }
        return maxDelta;
    }
};
