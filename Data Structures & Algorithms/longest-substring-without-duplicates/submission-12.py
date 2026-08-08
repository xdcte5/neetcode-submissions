class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        l=0
        r=1
        csub=""
        if len(s)>0:
            csub+=s[0]
        msub=""
        while len(s)>1 and r<=len(s)-1:
            if s[r] not in csub:
                csub+=s[r]
                r+=1
            else:
                l=l+csub.find(s[r])+1
                csub=s[l:r]

            if len(msub)<len(csub):
                msub=csub
            
        if len(s)==0:
            return 0
        elif len(s)==1:
            return 1
        else:
            return len(msub)