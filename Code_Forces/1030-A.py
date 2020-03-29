

a = int(input())
b = list(map(int,raw_input().split()))
t = 0
for a in b:
    if a == 1:
        t += 1
if t > 0:
    print 'HARD'
else:
    print 'EASY'




