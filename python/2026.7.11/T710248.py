n=int(input())
binary='';k=0
for i in range(2**n-1,0,-1):
    binary='';k=0
    binary=bin(i)
    binary=str(binary)
    k=binary.count('1')
    if (2**k)%i==0:
        print(i)
        break