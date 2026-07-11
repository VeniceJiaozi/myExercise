n=int(input())
l=[int(x) for x in input().split()]
ans=0
s=[0]*20001
for i in range(n):
    for j in range(i+1,n):
        if l[i]+l[j]in l:
            if s[l[i]+l[j]]==0:
                s[l[i]+l[j]]=1
                ans+=1
print(ans)