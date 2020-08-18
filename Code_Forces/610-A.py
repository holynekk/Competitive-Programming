a = int(input())
if a > 1 and a % 2 == 0:
    a /= 2
    if a % 2 == 1:
        print a/2 
    else:
        print a/2 - 1
else:
    print 0