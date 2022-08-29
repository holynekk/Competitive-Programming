class Solution:
    def longestPalindrome(self, s: str) -> int:
        char_dict = {}
        for char in s:
            if char_dict.get(char):
                char_dict[char] += 1
            else:
                char_dict[char] = 1

        total = 0
        for x in char_dict.values():
            total += x - x%2
            if total % 2 == 0 and x % 2 == 1:
                total += 1
        return total