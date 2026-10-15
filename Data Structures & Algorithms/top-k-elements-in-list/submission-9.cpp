class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> freaks;

        for (int i : nums){
            freaks[i]+=1;
        }

        std::vector<vector<int>> freaksv;
        for (auto const& [key, val] : freaks){
            freaksv.push_back({key, val});
        }

        std::sort(freaksv.begin(), freaksv.end(), [](const auto& a, const auto& b){
            return a[1]>b[1];
        });

        std::vector<int> output;
        for (int i=0; i<k; ++i){
            output.push_back(freaksv[i][0]);
        }

        return output;
    }
};
