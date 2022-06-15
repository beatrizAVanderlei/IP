import re

n = int(input())
letras = re.compile('[A-Z]{3,3}')
numeros = re.compile('[0-9]{4,4}')

while n:
    n -= 1
    placa = input().split('-')

    if (len(placa) == 2) and (len(placa[0]) == 3) and (len(placa[1]) == 4) and (placa[0] == placa[0].upper()) and (letras.match(placa[0]) != None) and (numeros.match(placa[1]) != None):
        try:
            r = int(placa[1][3])

            if r > 8 or r == 0:
                print('FRIDAY')
            elif r > 6:
                print('THURSDAY')
            elif r > 4:
                print('WEDNESDAY')
            elif r > 2:
                print('TUESDAY')
            else:
                print('MONDAY')
        except:
            print('FAILURE')

    else:
        print('FAILURE')
