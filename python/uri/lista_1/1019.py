n = int(input())

horas = n//60**2
n = n-horas*60**2

minutos = n//60
n = n-minutos*60

segundos = n

print ("{}:{}:{}". format(horas, minutos, segundos))
