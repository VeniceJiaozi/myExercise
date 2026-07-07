s=input().split()
h=float(s[0])
r=float(s[1])
h/=10
r/=10
v=3.14*r*r*h
V=v
ans=1
while V<20:
    V+=v
    ans+=1
print(ans)