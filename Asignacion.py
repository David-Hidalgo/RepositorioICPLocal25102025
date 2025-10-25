
iteracion = int(input())

for i in range(iteracion):
    n,a,b,x=input().split()
    n = int(n)
    a = int(a)
    b = int(b)
    x = int(x)
    min =0
    max = 10000000000000
    if (n >min and  n < max) and (a >min and a < max) and (b >min and b < max) and (x >min and x < max):
        TPS = a*((15/36))+b*((15/36))+x*((6/36))
        tiempopromedio= TPS +(6/36)*TPS+((6/36)**2)*TPS+((6/36)**3)*TPS+((6/36)**4)*TPS+((6/36)**5)*TPS+((6/36)**6)*TPS
        print(n*tiempopromedio)