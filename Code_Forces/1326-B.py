a = int(input())
b = list(map(int, raw_input().split()))
mx = b[0]

for k in range(1, a):
    if b[k-1] > mx:
        mx = b[k-1]
    b[k] += mx
for i in b:
    print i,