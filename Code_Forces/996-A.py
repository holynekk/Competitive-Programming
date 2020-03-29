b = [100, 20, 10, 5, 1]
total = 0
a = int(input())
i = 0
while a > 0 and i <= 4:
    if a - b[i] >= 0:
        total += a/b[i]
        a = a % b[i]
    else:
        i += 1


print total