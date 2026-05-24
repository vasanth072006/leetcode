class Solution:
    def isAlphanum(self,s):
        if 48<=ord(s)<=57 or \
           65 <= ord(s) <= 90 or \
           97<= ord(s)<=122:
               return True
        else :
            return False
 
    def isPalindrome(self, s: str) -> bool:
        j=len(s)-1
        i=0
        while i<j:
            if not self.isAlphanum(s[i]):
                i+=1
            elif not self.isAlphanum(s[j]):
                j-=1
            elif s[i].lower()==s[j].lower():
                i+=1
                j-=1
            else:
                return False
        return True