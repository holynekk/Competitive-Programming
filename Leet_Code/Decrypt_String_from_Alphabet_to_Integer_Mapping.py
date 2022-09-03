class Solution:
    def freqAlphabets(self, s: str) -> str:
        result = ""
        s = list(s)
        
        while s:
            char = s.pop()
            if char == "#":
                number = s.pop() + s.pop()
                result += chr(int(number[::-1])+96)
            else:
                result += chr(int(char)+96)
        
        return result[::-1]