#include <cctype>
class Solution {
public:
    bool isPalindrome(string s) {
        int lp=0;
        int rp=s.size()-1;

        while (rp >= lp){
            if (!isalnum(s[lp])){
                lp+=1;
                continue;
            }
            if (!isalnum(s[rp])){
                rp-=1;
                continue;
            }
            if(tolower(s[lp]) == tolower(s[rp])){
                lp+=1;
                rp-=1;
                continue;
            }else{
                return false;
            }
        }

        return true;
    }
};
