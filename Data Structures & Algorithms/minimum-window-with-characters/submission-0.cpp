class Solution {
public:
    string minWindow(string s, string t) {
        if (t.size()>s.size()){
            return "";
        }
        std::unordered_map<char, int> tHash;
        std::unordered_map<char, int> wHash;
        for (char c : t){
            tHash[c]++;
        }
        int need= tHash.size();
        int lp=0;

        int minLength=-1;
        int have =0;
        vector<int> outputP;

        
        for (int rp=0; rp<s.size(); ++rp){
            if (tHash.find(s[rp]) != tHash.end()){
                wHash[s[rp]]++;
                if (wHash[s[rp]] == tHash[s[rp]]){
                    have++;
                }
            }
            while (have==need){
                if(minLength==-1){
                    minLength=rp-lp+1;
                    outputP={lp, rp};
                } else if (rp-lp+1<minLength){
                    minLength=rp-lp+1;
                    outputP={lp, rp};
                } 
                if(tHash.find(s[lp]) != tHash.end()){
                    if(wHash[s[lp]] == tHash[s[lp]]){
                        have--;
                    }
                    wHash[s[lp]]--;
                }
                lp++;
            }
            
        }

        string output="";
        if (outputP.size()>1){
            for (int i=outputP[0]; i<outputP[1]+1; ++i){
                output+=s[i];
            }
        }
        return output;

    }
};
