class Solution:
    def isPalindrome(self, s: str) -> bool:
        ns=""
        for i in s:
            if i.isalnum()==True:
                ns+=i.lower()
            else:
                pass

        f=0
        l=len(ns)-1
        done=False
        valid=True

        if ns=="":
            done=True

        while done==False:
            if ns[f]==ns[l]:
                pass
            else:
                valid=False
                done=True
            
            f+=1
            l-=1



            if f>l or f==l:
                done=True

        return valid