class Solution:
    def areAlmostEqual(self, s1: str, s2: str) -> bool:
        miss = []
        for i in range(len(s1)):
            if len(miss) >= 3:
                break
            if s1[i] != s2[i]:
                if not miss:
                    miss.append([s1[i], s2[i]])
                else:
                    miss.append([s2[i], s1[i]])
                
            
                
        return not miss or len(miss) == 2 and miss[0] == miss[1] 
            