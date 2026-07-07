
s=[0]*8
for i in range(7):
    x=input().split()
    a=int(x[0])
    b=int(x[1])
    s[i]=a+b
ans=7
for i in range(7):
    if s[i]>s[ans] and s[i]>8:
        ans=i
if ans==7:
    print("0")
else:
    print(ans+1)