n = int(input())
for i in range(n):
    truth = 1
    b = int(input())
    s = raw_input()
    for k in range(b/2):
        diff = abs(ord(s[k]) - ord(s[b-k-1]))
        if diff > 2 or diff % 2 == 1:
            truth = 0
            break
    if truth:
        print "YES"
    else:
        print "NO"