s=input().split()
hei=int(input())+30
a=[0]*10;ans=0
for i in range(10):
    a[i]=int(s[i])
for i in range(10):
    if hei>=a[i]:
        ans+=1
print(ans)