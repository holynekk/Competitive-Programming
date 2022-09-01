class Solution:
    def interpret(self, command: str) -> str:
        i, n = 0, len(command)
        result = ""
        while i < n:
            if command[i] == 'G':
                result += 'G'
                i+=1
            elif command[i+1] == ')':
                result += 'o'
                i+=2
            elif command[i+1] == 'a':
                result += 'al'
                i+=4
        return result