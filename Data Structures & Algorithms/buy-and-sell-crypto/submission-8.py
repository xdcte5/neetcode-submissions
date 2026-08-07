class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        l=0
        r=1
        maxi=0

        while r<=(len(prices)-1):
            profit=prices[r]-prices[l]
            if profit<0:
                l=r
                r=l+1
                continue
            else:
                r+=1
                maxi=max(maxi, profit)

        
        if len(prices)==1:
            return 0
        else:
            return maxi

            


        
