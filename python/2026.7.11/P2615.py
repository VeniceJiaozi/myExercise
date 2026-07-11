n=int(input())
l=[[0 for i in range(n)]for i in range(n)]
k=2;x=y=0
l[0][n//2]=1
x=0;y=n//2
while k<=n**2:
    #case1
    if x==0 and y!=n-1:
        x=n-1;y+=1
        l[x][y]=k
        k+=1
        continue
    #case2
    if x!=0 and y==n-1:
        x=x-1;y=0
        l[x][y]=k
        k+=1
        continue
    #case3
    if x==0 and y==n-1:
        x+=1
        l[x][y]=k
        k+=1
        continue
    #case4
    if x!=0 and y!=n-1:
        if l[x-1][y+1]==0:
            x-=1;y+=1
            l[x][y]=k
            k+=1
            continue
        else:
            x+=1
            l[x][y]=k
            k+=1
            continue
for i in range(n):
    for j in range(n):
        print(l[i][j],end=' ')
    print('')