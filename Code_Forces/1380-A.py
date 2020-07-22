a = int(input())
m = 0
for i in range(a):
    b = int(input())
    q = list(map(int, raw_input().split()))
    for k in range(1, b - 1):
        if q[k] > q[k - 1] and q[k] > q[k + 1]:
            if m == 0:
                print "YES", "\n", k, k + 1, k + 2
                m += 1
    if m == 0:
        print"NO"
    m = 0