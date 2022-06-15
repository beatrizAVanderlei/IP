while (1):
    try:
        t = int(input())
        m = 0
        x = input(). split(' ')

        for i in range(t):
            if int(x[i]) > m:
                m = int(x[i])

        if m < 10:
            velocidade = 1

        elif m > 10 and m < 20:
            velocidade = 2

        else:
            velocidade = 3

        print (velocidade)

    except EOFError:
        break
