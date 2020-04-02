class Solution(object):
    def longestCommonPrefix(self, strs):
        if len(strs) == 0:
            return ''
        maxi = len(strs[0])
        
        for i in range(1,len(strs)):
            a = 0
            for k in range(min(maxi,len(strs[i]))):
                if strs[0][k] == strs[i][k]:
                    a += 1
                else:
                    break
            if a < maxi:
                maxi = a
        return strs[0][:maxi]
