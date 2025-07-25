class Solution:
    def maxSum(self, nums: List[int]) -> int:
        ans = set()
        minimum = float('-inf')

        for i in range(len(nums)):
            if nums[i] > 0 :
                ans.add(nums[i])
            minimum = max(minimum,nums[i])

        if (len(ans) ==0 ):
            return minimum
        return sum(ans)