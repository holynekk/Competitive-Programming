a = int(input())
end = a**2
start = 1
for k in range(a):
    for i in range(int(a)/2):
        print start, end,
        start += 1
        end -= 1
    print "\n",