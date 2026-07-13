n=int(input())
x=y=1;ans=0
while 2**x<n:
    y=1
    while 2**x+y**2<=n:
        ans+=1
        y+=1
    x+=1
print(ans)