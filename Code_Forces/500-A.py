n, route = list(map(int, raw_input().split()))
arr = list(map(int, raw_input().split()))

total = 0
i = 0
while i < route - 1:
    total += arr[i]
    i += arr[i]
if total == route - 1:
    print "YES"
else:
    print "NO"