class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        max_num = 0
        sub_length = 0
        start_index = 0
        set_of_chars = set()
        for i in range(len(s)):
            if s[i] in set_of_chars:
                for k in range(start_index, i):
                    if s[k] == s[i]:
                        start_index = k+1
                        sub_length = i-k
                        break
                    else:
                        set_of_chars.remove(s[k])
                continue
            sub_length += 1
            max_num = sub_length if sub_length > max_num else max_num
            set_of_chars.add(s[i])
                
        return max_num
