

a = int(input())
for i in range(a):
    b = int(input())
    c = list(map(int, raw_input().split()))
    odd = 0
    while odd == 0:
        for k in range(len(c)):
            for y in range(k+1, len(c)):
                if (c[k] - c[y]) % 2 == 1:
                    odd += 1
        break
    if odd == 0:
        print 'YES'
    else:
        print 'NO'
