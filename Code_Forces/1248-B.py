n = input()
a = list(map(int,raw_input().split()))
a = sorted(a)
b = 0
c = 0
for i in range(1,n+1):
    if i <= n/2.0 :
        b += a[i-1]
    else:
        c += a[i-1]
print b**2 + c**2