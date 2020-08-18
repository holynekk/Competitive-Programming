a = int(input())

for i in range(a):
    x, y = list(map(int, raw_input().split()))
    if x >= y:
        print "YES"
    elif x == 1:
        print "NO"
    elif x == 2 and y == 3:
        print "YES"
    elif (x == 2 or x == 3) and y > 3:
        print "NO"
    else:
        print "YES"
        
    





        