class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        iso_dict = {}
        for i in range(len(s)):
            if s[i] not in iso_dict and t[i] not in iso_dict.values():
                iso_dict[s[i]] = t[i]
            elif iso_dict.get(s[i]) != t[i]:
                return False
        return True