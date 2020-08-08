x = 0
q = int(input())
for k in range(q):
    s = raw_input()
    if '+' in s:
        x += 1
    else:
        x -= 1
print x