class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int longestSoFar = 1;
        
        if (nums.size()==0){
            return 0;
        } else if(nums.size()==1){
            return 1;
        }
        vector<int> currentLongest = {nums[0]};

        for (int i=1; i<nums.size(); ++i){
            if (nums[i]==nums[i-1]+1){
                currentLongest.push_back(nums[i]);
            }else if(nums[i]==nums[i-1]){
                continue;
            }else{
                if (longestSoFar<currentLongest.size()){
                    longestSoFar=currentLongest.size();
                }
                
                currentLongest.clear();
                currentLongest.push_back(nums[i]);
            }
        }
        if (longestSoFar<currentLongest.size()){
            longestSoFar=currentLongest.size();
        }
        return longestSoFar;

    }
};
