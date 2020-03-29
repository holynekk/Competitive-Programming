anan = {"Tetrahedron" : 4, "Cube" : 6, "Octahedron":8, "Dodecahedron":12, "Icosahedron": 20}

a = int(input())
total = 0
for i in range(a):
    b = raw_input()
    total += anan[b]
print total

