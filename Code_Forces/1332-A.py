a = int(input())
for i in range(a):
    a, b, c, d = map(int, raw_input().split())
    x, y, x1, y1, x2, y2 = map(int, raw_input().split())
    x += b - a
    y += d - c
    if x1 == x2 and b + a > 0:
        print "No"
    elif y1 == y2 and c + d > 0:
        print "No"
    elif x1 <= x <= x2 and y1 <= y <= y2:
        print "Yes"
    else:
        print "No"

