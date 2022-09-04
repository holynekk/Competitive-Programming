class Solution:
    def checkIfExist(self, arr: List[int]) -> bool:
        temp = set()
        for num in arr:
            if num * 2 in temp or num%2==0 and num/2 in temp:
                return True
            temp.add(num)
        return False
