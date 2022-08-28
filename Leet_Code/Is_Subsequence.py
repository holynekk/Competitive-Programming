class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        s_p = t_p = 0
        
        while s_p < len(s) and t_p < len(t):
            if s[s_p] == t[t_p]:
                s_p+=1
            t_p+=1
        
        return s_p == len(s)