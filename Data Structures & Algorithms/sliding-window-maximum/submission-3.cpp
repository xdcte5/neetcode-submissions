class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        std::priority_queue<int> pq;
        std::vector<int> out;
        std::unordered_map<int, int> dels;
        out.reserve(nums.size()-k+1);
        int lp=0;
        int rp=k-1;
        for (int i=0; i<k; ++i){
            pq.push(nums[i]);
        }
        out.push_back(pq.top());
        
        while(rp<nums.size()-1){
            dels[nums[lp]]++;
            lp++;
            rp++;
            pq.push(nums[rp]);
            while(dels[pq.top()]>0){
                dels[pq.top()]--;
                pq.pop();
            }
            out.push_back(pq.top());
            cout<<rp<<endl;
        }
        return out;
    }
};
