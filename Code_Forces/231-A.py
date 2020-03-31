a = int(input())
anan = 0
for i in range(a):
    total = 0
    b = list(map(int, raw_input().split()))
    for k in range(3):
        if b[k] == 1:
            total += 1
    if total >= 2:
        anan += 1
print anan