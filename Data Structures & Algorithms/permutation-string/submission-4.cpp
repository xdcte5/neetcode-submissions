class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        std::unordered_map<char, int> s1freaks;
        for (char c : s1){
            s1freaks[c]+=1;
        }
        int lp=0;
        int rp=s1.size()-1;
        std::unordered_map<char, int> wf;
        for (int i=0; i<rp; i++){
            wf[s2[i]]++;
        }
        while(rp<s2.size()){
            wf[s2[rp]]++;
            bool found=true;
            for (const auto& [key, val] : s1freaks){
                if(wf[key]<val){
                    found=false;
                    break;
                }
            }
            if (found){
                return true;
            }
            wf[s2[lp]]--;
            lp++;
            rp++;
        }

        return false;
    }
};
