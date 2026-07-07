n=int(input())
a=[0]*3
b=[0]*3
money=[0]*3
ans=0x3f
for i in range(3):
    s=input().split()
    a[i]=int(s[0])
    b[i]=int(s[1])
    if n%a[i]==0:
        money[i]=n/a[i]*b[i]
    else:
        money[i]=n//a[i]*b[i]+b[i]
for i in range(3):
    if money[i]<=ans:
        ans=money[i]
print(int(ans))