class Solution:
    def climbStairs(self, n: int) -> int:
        if n <= 3:
            return n
        def mul(a, b): # multiplication of 2 * 2 matrix
            m00 = a[0][0] * b[0][0] + a[0][1] * b[1][0]
            m01 = a[0][0] * b[0][1] + a[0][1] * b[1][1]

            m10 = a[1][0] * b[0][0] + a[1][1] * b[1][0]
            m11 = a[1][0] * b[0][1] + a[1][1] * b[1][1]

            return [[m00, m01], [m10, m11]]
        
        mat = [[1, 1], [1, 0]]
        def power(x):
            if x == 0:
                return [[1, 0], [0, 1]]
            if x & 1 == 1: #odd power
                half = power(x // 2)
                return mul(mul(mat, half), half)
            else:
                half = power(x // 2)
                return mul(half, half)


        pw = power(n - 2)[0]
        nth = pw[0] * 2 + pw[1]
        return nth