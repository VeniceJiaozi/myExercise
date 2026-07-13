l=int(input())
zhi=[1]*(l+1) #假设都是质数
ans=sum=0;i=2
while i<=l**0.5: #筛法
    for j in range(i*2,l,i):
        zhi[j]=0
    i+=1
for j in range(2,l): #输出
    if zhi[j]==1:
        sum+=j
        if sum<=l:
            ans+=1
            print(j)
        else:
            break
print(ans)