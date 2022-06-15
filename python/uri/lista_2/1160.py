t = int(input())

for i in range(t):
    x = input(). split(' ')
    PA, PB, CA, CB = x
    PA = int(PA)
    PB = int(PB)
    CA = float(CA)/100
    CB = float(CB)/100
    anos = 0

    while (1):
        PA += int(PA*CA)
        PB += int(PB*CB)
        anos = anos + 1

        if PA > PB or anos > 100:
            break

    if anos <= 100:
        print ("{} anos.". format(anos))

    else:
        print ("Mais de 1 seculo.")
