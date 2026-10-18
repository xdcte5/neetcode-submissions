#include <algorithm>
class Solution {
public:
    int maxArea(vector<int>& heights) {
        int lp=0;
        int rp=heights.size()-1;

        int most_water=0;
        while(lp<rp){
            most_water=std::max(most_water, std::min(heights[lp], heights[rp]) * (rp-lp));
            if(heights[lp]<heights[rp]){
                lp+=1;
            } else{
                rp-=1;
            }
        }
        return most_water;
    }
};
