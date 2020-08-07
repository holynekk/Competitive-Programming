a = int(input())
for i in range(a):
    b = int(input())
    if b % 2 == 0:
        q = "1"*(b/2)
    else:
        q = "7"+((b-3)/2)*"1"
    print q