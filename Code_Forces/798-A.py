a = raw_input()
num = len(a)
total = 0
for i in range(num/2):
    if a[i] != a[num-i-1]:
        total +=1
if num % 2 == 0 and total == 1:
    print 'YES'
elif num % 2 == 1 and total <= 1:
    print 'YES'
else:
    print "NO"