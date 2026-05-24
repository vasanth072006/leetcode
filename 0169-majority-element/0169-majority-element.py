class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        c = 0
        e = 0

        for n in nums:
            if c == 0:
                e = n
            if n == e:
                c += 1
            else:
                c -= 1

        return e