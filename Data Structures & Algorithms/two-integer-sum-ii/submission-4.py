class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        f=0
        l=len(numbers)-1
        fin=[]
        found=False
        while found==False:
            if (numbers[f]+numbers[l])<target:
                f+=1
            elif (numbers[f]+numbers[l])>target:
                l-=1
            else:
                fin.append(f+1)
                fin.append(l+1)
                found=True
        return fin