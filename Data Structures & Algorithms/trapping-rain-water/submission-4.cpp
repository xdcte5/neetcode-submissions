class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> prefix(height.size());
        vector<int> suffix(height.size());

        int pmax=-1;
        for (int i=0; i<height.size(); ++i){
            pmax=std::max(pmax, height[i]);
            prefix[i]=pmax;
        }
        int smax=-1;
        for (int i=height.size()-1; i>=0; --i){
            smax=std::max(smax, height[i]);
            suffix[i]=smax;
        }
        int totalWater=0;
        for (int i = 0; i<height.size(); ++i){
            int waterNow=(std::min(prefix[i], suffix[i]))-height[i];
            totalWater+=waterNow;
        }
        return totalWater;
    }

};
