m = int(input())

mm = input(). split(' ')

v = []

for i in range(1 , m):
    if int(mm[i - 1]) > int(mm[i]):
        v += [1]
    elif int(mm[i - 1]) < int(mm[i]):   
        v += [0]
    else:
        v += [2]

if int(mm[i - 1]) < int(mm[i]):
    v += [1]

elif int(mm[i - 1]) > int(mm[i]):   
    v += [0]

else:
    v += [2]

st = 1

for i in range(m-1):
    if v[i] == v[i + 1] or v[i] == 2 or v[i + 1] == 2:
        st = 2
        break

if st == 1:
    print(1)

else:
    print(0) 
