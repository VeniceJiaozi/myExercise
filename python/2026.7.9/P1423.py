s=float(input())
ans=1;tol=x=2
while tol<s:
    x*=0.98
    tol+=x
    ans+=1
print(ans)