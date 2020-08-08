x, y = 0, 0
for k in range(5):
    q = list(map(int, raw_input().split()))
    for i in range(5):
        if q[i] == 1:
            y = i
            x = k
            break
        


print abs(x-2)+abs(y-2)