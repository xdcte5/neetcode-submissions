class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<vector<int>> ps;
        int prefix=1;
        for (int i=0; i<nums.size(); ++i){
            ps.push_back({});
            ps[i].push_back(prefix);
            prefix=prefix*nums[i];
        }

        int suffix=1;
        for (int i=nums.size()-1; i>-1; --i){
            ps[i].push_back(suffix);
            suffix=suffix*nums[i];
        }
        vector<int> output;
        for (vector<int>& v : ps){
            output.push_back(v[0]*v[1]);
        }
        return output;
    }
};
