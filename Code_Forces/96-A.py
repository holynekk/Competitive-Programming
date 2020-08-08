q = raw_input()
n = len(q)
danger = 1
for k in range(1, n):
    if q[k] == q[k-1]:
        danger += 1
    else:
        danger = 1
    if danger == 7:
        break
if danger == 7:
    print "YES"
else:
    print "NO"
