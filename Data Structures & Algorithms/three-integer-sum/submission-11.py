class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        snums=sorted(nums)
        tep=[]
        for m in range(len(snums)-2):
            f=m+1
            l=len(snums)-1
            while f<l:
                total=snums[m]+snums[f]+snums[l]
                if total==0:
                    tep.append([snums[m], snums[f], snums[l]])
                    f+=1
                elif total<0:
                    f+=1
                elif total>0:
                    l-=1

        dups_elim=set([tuple(i) for i in tep])
        output=[list(i) for i in dups_elim]
        return output



       
                    