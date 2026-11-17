class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int total = nums1.size()+nums2.size();
        int left = total/2;

        bool odd = (total%2 == 0 ? false : true);

        vector<int>& small = (nums1.size()< nums2.size() ? nums1 : nums2);

        vector<int>& big = (nums1.size()>=nums2.size()? nums1 : nums2);

        int lp=-1;
        int rp=small.size()-1;
        int mid=lp+(rp-lp)/2;

        int bigH;
        int smallH;

        while(lp<=rp){
            int bigIndex = left-(mid+1) -1;


            int smallLeft = (mid>=0 ? small[mid] : INT_MIN);
            int smallRight = (mid+1<small.size() ? small[mid+1] : INT_MAX);
            int bigLeft= (bigIndex>=0? big[bigIndex] : INT_MIN);
            int bigRight = (bigIndex+1 < big.size()? big[bigIndex+1] : INT_MAX);

            if ((smallLeft <= bigRight)&&(bigLeft<=smallRight)){
                bigH = bigIndex;
                smallH = mid;
                break;
            }else if(smallLeft>bigRight){
                rp=mid-1;
                mid=lp+(rp-lp)/2;
                
            }else{
                lp=mid+1;
                mid=lp+(rp-lp)/2;
            }
        }
        int finalSmallLeft = (smallH >= 0 ? small[smallH] : INT_MIN);
        int finalSmallRight = (smallH+1 < small.size() ? small[smallH+1] : INT_MAX);
        int finalBigLeft = (bigH >= 0? big[bigH] : INT_MIN);
        int finalBigRight = (bigH+1<big.size()? big[bigH+1] : INT_MAX);

        if(odd){
            return std::min(finalBigRight, finalSmallRight);
        }else{
            return ((double) std::max(finalSmallLeft, finalBigLeft) + std::min(finalSmallRight, finalBigRight))/2;
        }

    }
};
