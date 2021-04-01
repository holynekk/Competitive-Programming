class Solution:
    def toGoatLatin(self, S: str) -> str:
        arr = S.split(' ')
        for i in range(len(arr)):
            if(arr[i][0] in 'aeiouEAIOU'):
                arr[i] = arr[i] + 'ma'
            else:
                arr[i] = arr[i][1:] + arr[i][0] + 'ma'
            arr[i] = arr[i] + 'a' * (i+1)
        return ' '.join(arr)