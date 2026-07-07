def isrun(year):
    if year%100==0:
        if year%400==0:
            return True
        else:
            return False
    else:
        if year%4==0:
            return True
        else:
            return False

s=input().split()
y=int(s[0])
m=int(s[1])
if m==2:
    if isrun(y):
        print(29)
    else:
        print(28)
elif m==1 or m==3 or m==5 or m==7 or m==8 or m==10 or m==12:
    print(31)
else:
    print(30)
