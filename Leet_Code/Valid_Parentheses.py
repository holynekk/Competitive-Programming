class Solution(object):
    def isValid(self, s):
        closes = [')','}',"]"]
        opens = ['(','{',"["]
        stack = []
        for i in range(len(s)):
            if stack == []:
                if s[i] in closes:
                    return False
                else:
                    stack.append(s[i])
            else:
                if s[i] in closes:
                    if opens.index(stack[-1]) == closes.index(s[i]):
                        stack.pop()
                    else:
                        return False
                else:
                    stack.append(s[i])
        if stack == []:
            return True
        else:
            return False
