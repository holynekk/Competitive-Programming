class Solution:
    def canMakeArithmeticProgression(self, arr: List[int]) -> bool:
        min_val = min(arr)
        step = (max(arr) - min_val) / (len(arr)-1)
        if step - int(step):
            return False
        step = int(step)
        if step == 0:
            return True
        i = 0
        while i < len(arr):
            if arr[i] == min_val + i * step:
                i += 1
            else:
                diff = arr[i] - min_val
                if diff % step != 0:
                    return False
                pos = diff // step
                if arr[i] == arr[pos]:
                    return False
                arr[pos], arr[i] = arr[i], arr[pos]
        return True
