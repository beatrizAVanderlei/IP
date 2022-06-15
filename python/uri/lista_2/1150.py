X = int(input())
Z = 0

while(1):
    Z = int(input())
    if Z > X:
        break

soma = X
count = 1
i = X

while (soma <= Z):
    soma = soma + count + X
    count = count + 1
    
print("{}". format(count))
