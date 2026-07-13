n,m=map(int,input().split())
a=[0]*n
min=0x3f3f3f3f3f3f3f3f3f3f
for i in range(n):
    a[i]=int(input())
for i in range(n-m+1):
    tol=0
    for j in range(m):
        tol+=a[i+j]
    if tol<min:
        min=tol
print(min)