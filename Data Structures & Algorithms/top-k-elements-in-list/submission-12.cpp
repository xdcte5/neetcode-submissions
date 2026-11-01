class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> freaksHash;
        for (int i : nums){
            freaksHash[i]++;
        }
        std::vector<vector<int>> freaks;
        freaks.reserve(freaksHash.size());

        for (const auto& [key, val] : freaksHash){
            freaks.push_back({key, val});
        }
        std::sort(freaks.begin(), freaks.end(), [](const auto& a, const auto& b){
            return a[1]>b[1];
        });

        vector<int> output;
        output.reserve(k);

        for (int i=0; i<k; ++i){
            output.push_back(freaks[i][0]);
        }
        
        return output;
    }
};
