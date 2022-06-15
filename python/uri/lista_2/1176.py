testes = int(input())

for i in range(testes):
    x = int(input())
    f = [0, 1]

    if x >1:

        for a in range(2, x+1):
            f.append(f[a-2] + f[a-1])

        print ("Fib({}) = {}". format(x, f[x]))

    if x <= 1:
        print ("Fib({}) = {}". format(x, f[x]))
