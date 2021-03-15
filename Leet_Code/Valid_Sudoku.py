class Solution(object):
    def isValidSudoku(self, board):
        for i in range(9):
            for k in range(9):
                
                if(board[i][k] == '.'):
                    continue
                
                # Row check
                
                for col in range(9):
                    if col == k:
                        continue
                    if board[i][col] == board[i][k]:
                        return False
    
    
                # Col check
                
                for row in range(9):
                    if row == i:
                        continue
                    if board[row][k] == board[i][k]:
                        return False
                    
                
                # Square check
                
                a = (i / 3) * 3
                b = (k / 3) * 3
                
                for row in range(a, a+3):
                    for col in range(b, b+3):
                        if (row, col) == (i, k):
                            continue
                        if board[row][col] == board[i][k]:
                            return False
                
                
        return True