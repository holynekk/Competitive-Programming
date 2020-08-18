a = int(input())
for i in range(a):
    l, r, d = list(map(int, raw_input().split()))
    if l > d:
        print d
    else:
        print r - (r%d) + d