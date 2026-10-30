class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        std::set<vector<int>> output;

        for (int i=0; i<nums.size()-2; ++i){
            int target = -nums[i];
            int lp = i+1;
            int rp = nums.size()-1;
            while (lp<rp){
                if (nums[lp]+nums[rp] ==  target){
                    output.insert({nums[i], nums[lp], nums[rp]});
                }
                if (nums[lp]+nums[rp] < target){
                    lp++;
                } else {
                    rp--;
                }
            }
        }
        vector<vector<int>> finalOut;
        for (vector<int> v : output){
            finalOut.push_back(v);
        }
        return finalOut;
    }
};
