class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        std::sort(piles.begin(), piles.end());
        int left=1;
        int right=piles[piles.size()-1];
        int mid=left+(right-left)/2;

        long long sumHours=0;

        int minRate=-1;

        while (left<=right){
            for (int i : piles){
                if(i%mid == 0){
                    sumHours+=(i/mid);
                }else{
                    sumHours+=(i/mid)+1;
                }
            }
            if(sumHours<=h){
                if (minRate != -1){
                    minRate=std::min(minRate, mid);
                }else{
                    minRate=mid;
                }
                right=mid-1;
                mid=left+(right-left)/2;
            }else{
                left=mid+1;
                mid=left+(right-left)/2;
            }
            sumHours=0;
        }

        return minRate;
    }
};
