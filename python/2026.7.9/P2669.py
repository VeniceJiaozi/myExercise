k=int(input())
ans=0
for i in range(0x3f3f3f):
    if k==0:
        break
    for j in range(i+1):
        if k==0:
            break
        ans+=i+1
        k-=1
print(ans)