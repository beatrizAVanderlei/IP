a = input(). split(' ')

A, B, C = a
A = float(A)
B = float(B)
C = float(C)

delta = B*B - 4.0*A*C

if delta < 0.0 or A == 0.0:
    print ("Impossivel calcular")

else:
    x1 = (-B + (delta**0.5))/(2.0*A)
    x2 = (-B - (delta**0.5))/(2.0*A)

    print ("R1 = {:.5f}\nR2 = {:.5f}". format(x1, x2))
