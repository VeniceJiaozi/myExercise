n=int(input())
jiang=set(input().split())
s=[]
sum=te=yi=er=san=si=wu=liu=0

for i in range(n):
    sum=0
    s=input().split()
    for j in range(7):
        if s[j]in jiang:
            sum+=1;
    if sum==7:
        te+=1
    elif sum==6:
        yi+=1
    elif sum==5:
        er+=1
    elif sum==4:
        san+=1
    elif sum==3:
        si+=1
    elif sum==2:
        wu+=1
    elif sum==1:
        liu+=1

print(te,yi,er,san,si,wu,liu)