class Solution(object):
    def differenceOfSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        e_sum = sum(nums)
        d_sum = 0
        for i in nums:
            s = str(i)
            temp = 0
            for j in s:
                temp += int(j)
            d_sum += temp
        return abs(e_sum - d_sum)