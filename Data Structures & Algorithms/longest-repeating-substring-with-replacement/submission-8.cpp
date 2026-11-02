class Solution {
public:
    int characterReplacement(string s, int k) {
        if (s.size() == 1){
            return 1;
        }
        std::set<char> charSet;
        for (char c : s){
            charSet.insert(c);
        }
        int longest=0;
        for(char m : charSet){
            int lp=0;
            int rp=lp+1;
            int mCount=0;

            if (s[lp] == m){
                mCount++;
            }

            while (rp<s.size()){
                if (s[rp] == m){
                    mCount++;
                }
                if(rp-lp+1 - mCount <= k){
                    cout<<rp-lp+1<<" "<<m<<endl;
                    longest=std::max(longest, rp-lp+1);
                    rp++;
                    continue;
                }else{
                    while(rp-lp+1 - mCount > k){
                        if(s[lp] == m){
                            mCount--;
                        }
                        lp++;
                    }
                    rp++;
                    continue;
                }
            }
        }
        return longest;
    }
};
