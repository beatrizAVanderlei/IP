salario = float(input())

if salario <= 2000.00:
    print ("Isento")

else:
    if salario > 4500.00:
        i28 = (salario - 4500.00) * 0.28
        i18 = 1500.00 * 0.18
        i8 = 1000.00 * 0.08
        imposto = i28 + i18 + i8

    if 3000.00 < salario <= 4500.00:
        i8 = 1000.00 * 0.08
        i18 = (salario - 3000.00) * 0.18 
        imposto = i18 + i8

    if 2000.00 < salario <= 3000.00:
        i8 = (salario - 2000.00) * 0.08
        imposto = i8

    print ("R$ {:.2f}". format(imposto))
