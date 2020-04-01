a, b, c = list(map(int, raw_input().split()))

if c == 0:
    if a == b:
        print 'YES'
    else:
        print 'NO'
else:
    if a == b:
        print 'YES'
    else:
        if a > b:
            if c > 0:
                print 'NO'
            else:
                if (a-b) % c == 0:
                    print 'YES'
                else:
                    print 'NO'
        elif a < b:
            if c < 0:
                print 'NO'
            else:
                if (a-b)%c == 0:
                    print 'YES'
                else:
                    print 'NO'
