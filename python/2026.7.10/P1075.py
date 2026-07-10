n=int(input())
i=2;a=b=0

def zhi(x):
    for i in range(2,int(n**0.5)):
        if x%i==0 and x!=i:
            return 0
    return 1
'''
while i<=n**0.5:
    for j in range(n):
        if j%i==0 and j!=i:
            zhi[j]=0
    i+=1
for j in range(2,n):
    if n%j==0 and zhi[j]:
        a=j
        b=n/a
        break
print(int(max(a,b)))
mle
'''

while i<=n**0.5:
    if zhi(i) and n%i==0:
        a=i
        b=n/a
        break
    i+=1
print(int(max(a,b)))