n = int(input())

for i in range(0, n):
    numero = int(input())
    divisores = 1
    soma = 0

    while divisores <= numero:
        if numero%divisores == 0:
            soma = soma + 1

        divisores = divisores +1

    if soma > 2:
        print ("{} nao eh primo". format(numero))
    else:
        print ("{} eh primo". format(numero))
