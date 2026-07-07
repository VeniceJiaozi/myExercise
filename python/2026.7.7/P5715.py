s=input().split()
for i in range(3):
    s[i]=int(s[i])
for i in range(3):
    for j in range(i+1,3):
        if s[i]>s[j]:
            s[i],s[j]=s[j],s[i]
print(s[0],s[1],s[2])