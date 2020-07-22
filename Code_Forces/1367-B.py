a = int(input())
for i in range(a):
    even = 0
    odd = 0
    b = int(input())
    t = list(map(int ,raw_input().split()))
    for k in range(b):
        if k % 2 == 0:
            if t[k] % 2 != 0:
                even += 1
        else:
            if t[k] % 2 != 1:
                odd += 1
    if odd != even:
        print -1
    else:
        print odd