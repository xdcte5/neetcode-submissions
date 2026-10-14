class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> anacheck_s;
        std::unordered_map<char, int> anacheck_t;
        for (char c : s){
            anacheck_s[c] = anacheck_s[c]+1;
        }
        for (char c : t){
            anacheck_t[c] = anacheck_t[c]+1;
        }

        if (anacheck_s.size() != anacheck_t.size()){
            return false;
        }else{
            for (auto const& [key, val] : anacheck_s){
                if (anacheck_s[key] != anacheck_t[key]) {
                    return false;
                }
            
            }
            return true;
        }
    }
};
