class Solution:
    def isPalindrome(self, s: str) -> bool:
        nr=""
        for i in s:
            if i.isalnum()==True:
                nr+=i.lower()
            else:
                pass
        rnr=nr[::-1]
        if rnr==nr:
            return True
        else:
            return False