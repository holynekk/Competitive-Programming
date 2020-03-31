n = int(input())
b = list(map(int, raw_input().split()))
a = list(map(int, raw_input().split()))
c = 0
for i in range(a[0] - 1, a[1] - 1):
    c += b[i]
print c