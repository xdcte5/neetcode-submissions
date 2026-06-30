class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        out=[]
        for i in range(len(nums)):
            mult=1
            for j in range(len(nums)):
                if i==j:
                    pass
                else:
                    mult=mult*nums[j]

            out.append(mult)
        return out