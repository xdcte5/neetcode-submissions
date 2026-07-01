class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        fin=[]
        for i in range(len(numbers)):
            for j in range(i+1, len(numbers)):
                if numbers[i]+numbers[j]==target:
                    fin.append(i+1)
                    fin.append(j+1)
                else:
                    pass

        return fin

        