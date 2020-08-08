a = list(map(int, raw_input().split()))
q = list(map(int, raw_input().split()))

index = a[1] - 1

if q[a[1]-1] == 0:
    while index != -1 and q[index] == 0:
        index -= 1
else:
    while index + 1 < a[0] and q[index] == q[index+1]:
        index += 1

print index + 1
