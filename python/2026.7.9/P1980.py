s=input().split()
n=int(s[0])
x=s[1]
lis=[str(i) for i in range(1,n+1)]
long=''.join(lis)
num=long.count(x)
print(num)