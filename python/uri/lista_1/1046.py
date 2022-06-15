x = input(). split(' ')

inicio, final = x
inicio = int(inicio)
final = int(final)

if inicio < final:
    tempo = final - inicio

else:
    tempo = (24 - inicio) + final

print ("O JOGO DUROU {} HORA(S)". format(tempo))
