class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        n_strs=strs
        out=[]
        while len(n_strs) != 0:
            temp=[n_strs[0], ]
            l=len(n_strs)
            indices=[0, ]
            for i in range(1,l):
                if sorted(n_strs[0])==sorted(n_strs[i]):
                    temp.append(n_strs[i])
                    indices.append(i)
                else:
                    pass

            out.append(temp)
            
            new_n=[]
            for k in range(len(n_strs)):
                if k in indices:
                    pass
                else:
                    new_n.append(n_strs[k])

            n_strs=new_n


        return out

