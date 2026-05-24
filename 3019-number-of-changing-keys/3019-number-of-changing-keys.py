class Solution:
    def countKeyChanges(self, s: str) -> int:
        s = s.lower()  # normalize to lowercase
        ch = 0
        for i in range(1, len(s)):
            if s[i] != s[i - 1]:
                ch += 1
        return ch