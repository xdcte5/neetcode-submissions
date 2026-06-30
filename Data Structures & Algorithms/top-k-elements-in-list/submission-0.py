class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        s=sorted(nums)
        t_list=[]
        out=[]
        while len(s)!=0:
            count=0
            tup=[s[0], 1]
            for i in range(1,len(s)):
                if s[i] == s[0]:
                    tup[1]=tup[1]+1

                else:
                    break
            t_list.append(tuple(tup))

            s=s[tup[1]:]

        f=sorted(t_list, key=lambda x: x[1], reverse=True)
        for i in range(k):
            out.append(f[i][0])

        return out



            
        