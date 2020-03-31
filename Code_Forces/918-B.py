b = list(map(int, raw_input().split()))
q = []
w = []
for i in range(b[0]):
    a = list(map(str, raw_input().split()))
    q.append(a[0])
    w.append(a[1])
for k in range(b[1]):
    t = list(map(str, raw_input().split()))
    print t[0] + ' ' + t[1] + ' #' + q[w.index(t[1][:-1])]

