q = []
r = 1
a = int(input())
for i in range(a):
    b = raw_input()
    num = len(b)
    if num > 2:
        q.append(b[0])
        while r < num:
            q.append(b[r])
            r += 2
        print ''.join(q)
        q = []
        r = 1
    else:
        print b