class Solution {
public:
    int characterReplacement(string s, int k) {
        std::unordered_map<char, int> freaks;
        int lp=0;

        freaks[s[lp]]+=1;
        int maxl=0;
        int mf=1;
        if (s.size()==1){
            return 1;
        }

        int rp=lp+1;
        while (rp<s.size()){
            freaks[s[rp]]+=1;
            mf= std::max(mf, freaks[s[rp]]);
            while(((rp-lp+1 - mf) > k) && (lp<=rp)){
                freaks[s[lp]]--;
                lp+=1;
            }
            

            maxl=std::max(maxl, rp-lp+1);
            rp+=1;
        }
        
        return maxl;
    }
};
