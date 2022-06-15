n = int(input())

for i in range(0, n):
    numero = int(input())
    divisores = 1
    soma = 0

    while divisores < numero:
        if numero%divisores == 0:
            soma = soma + divisores

        divisores = divisores +1

    if soma == numero:
        print ("{} eh perfeito". format(numero))
    else:
        print ("{} nao eh perfeito". format(numero))
