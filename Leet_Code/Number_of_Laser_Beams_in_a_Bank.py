class Solution:
    def numberOfBeams(self, bank: List[str]) -> int:
        cur = 0
        prev = 0
        total = 0
        for i in range(len(bank)):
            cur = 0
            for j in range(len(bank[0])):
                if bank[i][j] == '1':
                    cur += 1
            if cur:
                total += cur * prev
                prev = cur
        return total