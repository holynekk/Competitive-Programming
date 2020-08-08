a1 = raw_input().lower()
a2 = raw_input().lower()

n = len(a1)
con = 0
for k in range(n):
    if ord(a1[k]) > ord(a2[k]):
        con += 1
        break
    elif ord(a1[k]) < ord(a2[k]):
        con -= 1
        break
print con

