class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lp=0;
        int rp=nums.size()-1;
        int mid = rp/2;

        
        while (rp-lp>1){
            if (nums[mid] ==  target){
                return mid;
            }
            if (nums[mid] < target){
                lp=mid;
                mid=lp + (rp-lp)/2;
                continue;
            } else {
                rp=mid;
                mid=lp + (rp-lp)/2;
                continue;
            }
        }
        if (rp-lp <= 1){
            for (int i=0; i<rp+1; i++){
                if (nums[i] == target){
                    return i;
                }
            }
        }
        
        return -1;
    }
};
