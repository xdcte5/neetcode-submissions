class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lp=0;
        int rp=nums.size()-2;
        int mid=lp+(rp-lp)/2;
        int last = nums[nums.size()-1];

        int start=0;
        
        while (lp<=rp){
            if (nums[mid]>nums[mid+1]){
                start=mid+1;
                break;
            }else if(nums[mid]>last){
                lp=mid+1;
                mid=lp+(rp-lp)/2;
            }else{
                rp=mid-1;
                mid=lp+(rp-lp)/2;
            }
        }

        lp=0;
        rp=nums.size()-1;
        mid=lp+(rp-lp)/2;
        while (lp<=rp){
            int slp;
            int srp;
            int smid;
            //translation layer

            if(lp>nums.size()-start-1){
                slp=lp-(nums.size()-start);
            }else{
                slp=lp+start;
            }
            if(rp>nums.size()-start-1){
                srp=rp-(nums.size()-start);
            }else{
                srp=rp+start;
            }
            if(mid>nums.size()-start-1){
                smid=mid-(nums.size()-start);
            }else{
                smid=mid+start;
            }
            // binary search like nothing happened, using translated coordinates

            if (nums[smid] == target){
                return smid;
            } else if (nums[smid]<target){
                lp=mid+1;
                mid=lp+(rp-lp)/2;
            }else{
                rp=mid-1;
                mid=lp+(rp-lp)/2;
            }
        }

        return -1;

    }
};
