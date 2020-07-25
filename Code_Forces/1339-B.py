a = int(input())
for i in range(a):
    b = int(input())
    q = list(map(int, raw_input().split()))
    q.sort()
    t = []
    if b % 2 == 0:
        k = b / 2 - 1
        while k >= 0:
            t.append(q[k])
            t.append(q[b-1-k])
            k -= 1
    else:
        k = b / 2
        t.append(q[k])
        k -= 1
        while k >= 0:
            t.append(q[k])
            t.append(q[b-1-k])
            k -= 1
    for k in range(b):
        print t[k],