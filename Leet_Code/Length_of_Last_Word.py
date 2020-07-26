class Solution(object):
    def lengthOfLastWord(self, s):
        a = s.split()
        if a == []:
            return 0
        else:
            return len(a[-1])
