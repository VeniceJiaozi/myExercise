s=input().split()
n=int(s[0])
x=int(s[1])
ans=0
for i in range(1,n+1):
    a=str(i)
    for j in range(len(a)):
        if int(a[j])==x:
            ans+=1
print(ans)