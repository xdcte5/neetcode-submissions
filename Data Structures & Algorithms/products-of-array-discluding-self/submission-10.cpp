class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mp=1;
        int zc=0;
        for (int i : nums){
            if (zc>1){
                mp=0;
                break;
            }
            if (i == 0){
                zc+=1;
            }else{
                mp*=i;
            }
        }

        vector<int> output;

        for (int i=0; i<nums.size(); ++i){
            if (zc==0){
                output.push_back(mp/nums[i]);
            }
            if (zc==1){
                if (nums[i] == 0){
                    output.push_back(mp);
                }else{
                    output.push_back(0);
                }
            }
            if (zc>1){
                output.push_back(0);
            }
        }
        return output;
    }
};
