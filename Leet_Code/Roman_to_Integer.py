class Solution(object):
    
    
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        romanArray = ['I', 1, 'V', 5, 'X', 10, 'L', 50, 'C', 100, 'D', 500, 'M', 1000]
        
        ans = 0
        
        i = 0
        while(i < len(s)-1):
            if romanArray.index(s[i]) < romanArray.index(s[i+1]):
                ans += romanArray[romanArray.index(s[i+1])+1] - romanArray[romanArray.index(s[i])+1]
                i += 1
            else:
                ans += romanArray[romanArray.index(s[i])+1]
            i += 1
            
        if i == len(s)-1:
            ans += romanArray[romanArray.index(s[i])+1]
            
        return ans