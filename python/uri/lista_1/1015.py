linha1 = input().split(" ")
linha2 = input().split(" ")

x1, y1 = linha1
x2, y2 = linha2

x1, x2 = float(x1), float(x2)
y1, y2 = float(y1), float(y2)

x = (x2 - x1) * (x2 -x1)
y = (y2 - y1) * (y2 - y1)
distancia = (x+y)**0.5

print ("{:.4f}". format(distancia))
