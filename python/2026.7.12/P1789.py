n,m,k=map(int,input().split())
l=[[0 for i in range(n)]for i in range(n)]
x=y=ans=0
for i in range(m):
    x,y=map(int,input().split())
    l[x-3][y-1]=l[x-2][y-1]=l[x-1][y-1]=l[x][y-1]=l[x+1][y-1]=1
    l[x-1][y-3]=l[x-1][y-2]=l[x-1][y-1]=l[x-1][y]=l[x-1][y+1]=1
    l[x-2][y-2]=l[x][y-2]=l[x-2][y]=l[x][y]=1
for i in range(k):
    x,y=map(int,input().split())
    for j in range(x-3,x+2):
        for k in range(y-3,y+2):
            l[j][k]=1
for i in range(n):
    for j in range(n):
        if l[i][j]==0:
            ans+=1
print(ans)