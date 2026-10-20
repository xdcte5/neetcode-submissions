class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int lp=0;
        int longest=0;
        if (s.length()<2){
            return s.length();
        }
        std::unordered_set<char> current = {s[lp]};
        for (int rp=lp+1; rp<s.size(); ++rp){
            if (current.contains(s[rp])){
                while (s[lp] != s[rp]){
                    current.erase(s[lp]);
                    lp+=1;
                }
                current.erase(s[lp]);
                lp+=1;
            }
            current.insert(s[rp]);
            longest=std::max<int>(longest, current.size());
        }
        return longest;

    }
};
