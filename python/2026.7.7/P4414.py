s=input().split()
s[0]=int(s[0]);
s[1]=int(s[1])
s[2]=int(s[2])
shun=input()
for i in range(3):
    for j in range(3):
        if s[i]<s[j]:
            s[i],s[j]=s[j],s[i]
for i in range(3):
    if shun[i]=="C":
        print(s[0],end=' ')
    elif shun[i]=="B":
        print(s[1],end=' ')
    else:
        print(s[2],end=' ')