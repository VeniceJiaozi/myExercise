n=int(input())
a=[0]*5001;l=[0]*5000001;t=[0]*5001
for i in range(n):
    s=input().split()
    a[i]=float(s[0])
    t[i]=int(s[1])
    for j in range(1,t[i]+1):
        if l[int(a[i]*j)]==1:
            l[int(a[i]*j)]=0
        else:
            l[int(a[i]*j)]=1
for i in range(1,5000001):
    if l[i]==1:
        print(i)
        break