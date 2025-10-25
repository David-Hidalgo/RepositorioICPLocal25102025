cadena = input()
cadenaexcluyente =input()
for i in range(len(cadenaexcluyente)):
    cadena = cadena.replace(cadenaexcluyente[i],"")
cadena= cadena.strip()
last= ""
result=""
for i in range(len(cadena)):
    if last != cadena[i]:
        result = result + cadena[i]
        last = cadena[i]
print(result)
