class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        temp = n
        res = 0
        sum = 0
        mul = 1
        while temp > 0:
            r = temp % 10
            temp//=10
            # res = res * 10 +r
            sum += r
            mul*= r
        return mul - sum