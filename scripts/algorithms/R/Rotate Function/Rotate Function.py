class Solution:
    def maxRotateFunction(self, nums: List[int]) -> int:
        preSum, cur = 0, 0
        for i in range(len(nums)):
            cur += i * nums[i]
            preSum += nums[i]
        ans = cur
        for i in range(1, len(nums)):
            cur -= len(nums) * nums[len(nums) - i]
            cur += preSum
            ans = max(ans, cur)
        return ans
