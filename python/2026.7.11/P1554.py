m,n=map(int,input().split())
l=[str(i) for i in range(m,n+1)]
s=''.join(l)
for i in range(0,10):
    print(s.count(str(i)),end=' ')