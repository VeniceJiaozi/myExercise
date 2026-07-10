n=int(input())
ans=[0]*n
line=input().split()
for i in range(n):
    line[i]=int(line[i])
    for j in range(i):
        if line[j]<line[i]:
            ans[i]+=1
for i in range(n):
    print(ans[i],end=' ')