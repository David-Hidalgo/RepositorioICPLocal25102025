import math

iteracion = int(input())
 math.p
for i in range(iteracion):
    precio =int(input())
    propina = int(math.ceil(precio *0.2))
    while not (str(precio+propina) == (str(precio+propina))[::-1]):
        propina = propina+1
    print(f"{propina} {precio+propina}")
