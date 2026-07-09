a,b=map(int,input().split())

def zhi(x):
    for j in range(2,int(x**0.5)+1):
        if x%j==0 and x!=j:
            return False
    return True

#最多八位
lis=[]
i=0

#一位
for d1 in range(1,10,2):
    lis.append(d1)

#两位
for d1 in range(1,10,2):
    lis.append(11*d1)

#3
for d1 in range(1,10,2):
    for d2 in range(0,10):
        lis.append(101*d1+10*d2 )

#4
for d1 in range(1,10,2):
    for d2 in range(0,10):
        lis.append(1001*d1+110*d2 )

#5
for d1 in range(1,10,2):
    for d2 in range(0,10):
        for d3 in range(0,10):
            lis.append(10001*d1+1010*d2+100*d3)  

#6
for d1 in range(1,10,2):
    for d2 in range(0,10):
        for d3 in range(0,10):
            lis.append(100001*d1+10010*d2+1100*d3)  

#7
for d1 in range(1,10,2):
    for d2 in range(0,10):
        for d3 in range(0,10):
            for d4 in range(0,10):
                lis.append(1000001*d1+100010*d2+10100*d3+1000*d4) 

#8
for d1 in range(1,10,2):
    for d2 in range(0,10):
        for d3 in range(0,10):
            for d4 in range(0,10):
                lis.append(10000001*d1+1000010*d2+100100*d3+11000*d4) 

for num in lis:
    if a<=num<=b and zhi(num):
        print(num)