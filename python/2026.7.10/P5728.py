n=int(input())
ans=0;chi=[0]*n;math=[0]*n;eng=[0]*n;tol=[0]*n;
for i in range(n):
    chi[i],math[i],eng[i]=map(int,input().split())
    tol[i]=chi[i]+math[i]+eng[i]
    for j in range(i):
        if abs(tol[i]-tol[j])<=10 and abs(chi[i]-chi[j])<=5 and abs(math[i]-math[j])<=5 and abs(eng[i]-eng[j])<=5:
            ans+=1
print(ans)