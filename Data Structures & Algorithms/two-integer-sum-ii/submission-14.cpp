class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int lp=0;
        int rp=numbers.size()-1;
        bool found=false;
        while (!found){
            if (numbers[lp]+numbers[rp]==target){
                found=true;
                continue;
            } else if(numbers[lp]+numbers[rp] < target){
                lp++;
            } else{
                rp--;
            }
        }

        return {lp+1, rp+1};
    }
};
