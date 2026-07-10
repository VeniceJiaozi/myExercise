n=int(input())
line=input().split()
ans=1;zancun=1
for i in range(1,n):
    if int(line[i])==int(line[i-1])+1:
        zancun+=1
        if zancun>ans:
            ans=zancun
    else:
        zancun=1
print(ans)