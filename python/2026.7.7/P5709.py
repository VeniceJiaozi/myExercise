s=input().split()
m=int(s[0])
t=int(s[1])
n=int(s[2])
if t==0:
    print(0)
else:
    if n%t==0:
        num=n/t
        if m-num>=0:
            print(int(m-num))
        else:
            print(0)
    else:
        num=n//t+1
        if m-num>=0:
            print(int(m-num))
        else:
            print(0)