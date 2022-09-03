class Solution:
    def isAlienSorted(self, words: List[str], order: str) -> bool:
        char_order = {}
        for i in range(len(order)):
            char_order[order[i]] = i
        
        for i in range(len(words)-1):
            for j in range(len(words[i])):
                if j >= len(words[i+1]):
                    return False
                if words[i][j] != words[i+1][j]:
                    if char_order[words[i][j]] > char_order[words[i+1][j]]:
                        return False
                    break
        return True