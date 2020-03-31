
a = raw_input()

if ord(a[0]) < 96:
    print a
else:
    print chr(ord(a[0])-32)+a[1:]

