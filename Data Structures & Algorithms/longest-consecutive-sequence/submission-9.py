class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        maxlength=1
        snums=set(sorted(nums))
        for i in snums:
            rn=i
            streak=1
            while rn in snums:
                if rn+1 in snums:
                    streak+=1
                    rn+=1
                else:
                    maxlength=max(maxlength, streak)
                    rn+=1
            
        if nums:
            return maxlength
        else:
            return 0



                
