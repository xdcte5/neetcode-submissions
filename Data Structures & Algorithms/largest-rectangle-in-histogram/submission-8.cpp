class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        std::stack<std::pair<int, int>> soros; // index and heighs

        int maxArea=0;
        
        for (int i=0; i<heights.size(); ++i){
            if (!soros.empty()){
                if (soros.top().second <= heights[i]){
                    soros.push({i, heights[i]});
                }else{
                    int start = i;
                    while((!soros.empty())&&(soros.top().second>heights[i])){
                        maxArea=std::max(maxArea, (int)((soros.top().second)*(i-soros.top().first)));
                        start = soros.top().first;
                        soros.pop();
                    }
                    soros.push({start, heights[i]});
                }
            } else{
                soros.push({i, heights[i]});
            }
        }
        while(!soros.empty()){
            maxArea=std::max(maxArea, (int)((soros.top().second)*(heights.size()-soros.top().first)));
            soros.pop();
        }
        return maxArea;
    }
};
