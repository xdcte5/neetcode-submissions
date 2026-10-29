class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        std::vector<int> output;
        std::priority_queue<int> window;
        for (int i=0; i<k; ++i){
            window.push(nums[i]);
        }
        output.push_back(window.top());

        std::unordered_map<int, int> dq;

        for (int i=k; i<nums.size(); ++i){
            window.push(nums[i]);
            dq[nums[i-k]]++;
            while (dq[window.top()]>0){
                dq[window.top()]--;
                window.pop();
            }
            output.push_back(window.top());
        }
        return output;
    }
};
