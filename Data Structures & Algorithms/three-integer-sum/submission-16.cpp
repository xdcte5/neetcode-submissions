class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        std::set<vector<int>> soutput;
        int i=0;
        int k=nums.size()-1;

        for (int j=1; j<nums.size()-1; ++j){
            int target= -(nums[j]);
            while ((i<j)&&(k>j)){
                int cs = nums[i]+nums[k];
                if(cs == target){
                    soutput.insert({nums[i], nums[j], nums[k]});
                    if(k-j > 1){
                        k--;
                    }else if(j-i >1){
                        i++;
                    }else{
                        break;
                    }
                    continue;
                } else if(cs>target){
                    k--;
                    continue;
                }else{
                    i++;
                    continue;
                }
            }

            i=0;
            k=nums.size()-1;
        }
        vector<vector<int>> output;
        for (vector<int> v: soutput){
            output.push_back(v);
        }

        return output;
    }
};
