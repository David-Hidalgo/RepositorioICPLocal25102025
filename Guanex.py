def main():
    cola=[]
    min = 0
    nQ = 0
    nQ=int(input())
    for i in range(nQ):
        instr = 0
        val = 0
        instr=int(input())
        
        if (instr==1):
            val=int(input())
            cola.append(val)
            cola.sort()
            min = cola[1]
            continue
        if(instr ==2) :
            if (0!=len(cola)):
                min = cola[len(cola)-1]
                cola.pop(len(cola)-1)
            continue

        if(instr ==3) :
            if (0==len(cola)):
                print("Empty!\n")
            else:
                print(min)
            continue

main()