class Solution {
public:
    int findMin(vector<int> &nums) {
        int lp=0;
        int rp=nums.size()-2;
        int mid=lp+(rp-lp)/2;
        int last = nums[nums.size()-1];

        while (lp<=rp){
            cout<<nums[mid]<<endl;
            if(nums[mid]>nums[mid+1]){
                return nums[mid+1];
            }else if(nums[mid]>last){
                lp=mid+1;
                mid=lp+(rp-lp)/2;
            }else{
                rp=mid-1;
                mid=lp+(rp-lp)/2;
            }
        }
        return nums[0];
    }
};
