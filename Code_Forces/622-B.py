a = raw_input()
b = int(input())

c = a.index(":")


minute = (int(a[c+1:]) + b) % 60
carry = (int(a[c+1:]) + b) / 60
hour = (int(a[:c]) + carry) % 24

neww = ''
if len(str(hour)) == 1:
    neww += '0{}:'.format(str(hour))
else:
    neww += str(hour)
if len(str(minute)) == 1:
    neww += '0{}'.format(str(minute))
else:
    new += str(minute)
print neww

    