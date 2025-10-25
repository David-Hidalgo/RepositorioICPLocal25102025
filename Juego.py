iteracion = int(input())

for i in range(iteracion):
    cantidadNumeros =int(input())
    listaEmma = input().split()
    listaOtto = input().split()
    mayor = int(listaEmma[i])
    indiceemma=0
    indiceotto=0
    menor = int(listaOtto[i])
    contador = 0
    while (len(listaEmma) !=0 or len(listaOtto)!=0):
        contador = contador+1
        for j in range(cantidadNumeros):

            if (mayor < int(listaOtto[j])):
                mayor = int(listaEmma[j])
                indiceemma=j

            if ( menor > int(listaOtto[j])):
                menor = int(listaOtto[j])
                indiceotto=j

        suma = mayor+ menor
        listaEmma.pop(indiceemma)
        listaOtto.pop(indiceotto)
        if suma % 2 ==0:
            listaEmma.append(suma/2)
        else:
            listaOtto.append(suma)
        if 
    print()

