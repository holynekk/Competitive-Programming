a = raw_input()
b = ['0']
a = a.lower()
vowels = ['a','o','y','e','i','u']
for k in a:
    if k not in vowels:
        b.append(k)
print '.'.join(b)[1:]
