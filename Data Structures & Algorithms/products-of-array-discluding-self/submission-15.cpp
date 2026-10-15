class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output;
        int prefix=1;   
        for (int i=0; i<nums.size(); ++i){
            output.push_back(prefix);
            prefix*=nums[i];
        }

        int suffix=1;
        for (int i=nums.size()-1; i>-1; --i){
            output[i]*=suffix;
            suffix*=nums[i];
        }


        return output;
    }
};
