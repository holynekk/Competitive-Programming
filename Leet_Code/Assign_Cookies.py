class Solution(object):
    def findContentChildren(self, g, s):
        g = sorted(g)
        s = sorted(s)
        p1 = 0
        p2 = 0
        while (p1 < len(g) and p2 < len(s)):
            if s[p2] >= g[p1]:
                p2 += 1
                p1 += 1
            else:
                p2 += 1
        return p1
