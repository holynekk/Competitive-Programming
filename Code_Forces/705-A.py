

a = int(input())
for i in range(a):
    if i == a-1:
        if a % 2 == 1:
            print "I hate",
        else:
            print 'I love',
    elif i % 2 == 0:
        print "I hate that",
    else:
        print 'I love that',

print 'it'
