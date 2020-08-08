pre = ''
cons = 0
b = int(input())
q = raw_input()
for k in q:
    if pre == k:
        cons += 1
    pre = k
print cons