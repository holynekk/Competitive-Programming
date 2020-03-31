
a = int(input())
for i in range(a):
    b = raw_input()
    if len(b) <= 10:
        print b
    else:
        print b[0]+'{}'.format(len(b[1:-1]))+b[-1]



