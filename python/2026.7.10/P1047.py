l,m=map(int,input().split())
shu=[1]*(l+1);a=b=ans=0
for i in range(m):
    a,b=map(int,input().split())
    for j in range(a,b+1):
        shu[j]=0
for i in range(l+1):
    if shu[i]==1:
        ans+=1
print(ans)