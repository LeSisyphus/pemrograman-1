def maksimal(a, b):
    return b if a < b else a

def minimal(a, b):
    return b if a > b else a

batas = 0
maks = -100000
minim = 100000
bilangan = int(input())

i = 0
nilai = input().split()

while i < bilangan: 
    maks = maksimal(maks, int(nilai[i]))
    minim = minimal(minim, int(nilai[i]))
    i += 1

print(maks, minim) 
