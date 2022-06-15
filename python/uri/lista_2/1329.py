while (1):
    quantidade = int(input())

    if quantidade == 0:
        break

    resultados = list(map(int, input(). split(' ')))
    m = 0
    j = 0

    for i in resultados:
        if (i == 0):
            m = m + 1
        else:
            j = j + 1

    print("Mary won {} times and John won {} times". format(m, j)) 
