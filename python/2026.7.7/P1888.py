s=input().split()
s[0]=int(s[0])
s[1]=int(s[1])
s[2]=int(s[2])
for i in range(3):
    for j in range(3):
        if s[i]<s[j]:
            s[i],s[j]=s[j],s[i]
c=s[2]
a=s[0]
for i in range(2,s[2]+1):
    if c%i==0 and a%i==0:
        c/=i
        a/=i
a=int(a)
c=int(c)
a=str(a)
c=str(c)
print(a+'/'+c)