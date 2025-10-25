
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
        print(f"{n} {a}")
