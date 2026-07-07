s=input().split()
x=int(s[0])
n=int(s[1])
ans=0
for i in range(n):
    if x!=6 and x!=7:
        ans+=250;print(i,x)
        x+=1
        continue
    if x==6:
        x=7
        continue
    if x==7:
        x=1
print(int(ans))