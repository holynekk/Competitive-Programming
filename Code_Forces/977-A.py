a = list(map(int,raw_input().split()))
for i in range(a[1]):
    if a[0] % 10 != 0:
        a[0] = a[0]-1
    else:
        a[0] = a[0]//10
print a[0]