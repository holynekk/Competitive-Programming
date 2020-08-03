class Solution:
    def sortArrayByParityII(self, A: List[int]) -> List[int]:
        n = len(A)
        j = 1
        for i in range(0, n, 2):
            if(A[i] % 2 == 1):
                while (A[j] % 2 == 1):
                    j += 2
                tmp = A[i]
                A[i] = A[j]
                A[j] = tmp
        return A
