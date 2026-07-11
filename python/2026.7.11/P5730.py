n=int(input())
line=input()
s1=s2=s3=s4=s5=''
for i in range(n):
    if line[i]=='0':
        s1+='XXX'
        s2+='X.X'
        s3+='X.X'
        s4+='X.X'
        s5+='XXX'
    elif line[i]=='1':
        s1+='..X'
        s2+='..X'
        s3+='..X'
        s4+='..X'
        s5+='..X'
    elif line[i]=='2':
        s1+='XXX'
        s2+='..X'
        s3+='XXX'
        s4+='X..'
        s5+='XXX'
    elif line[i]=='3':
        s1+='XXX'
        s2+='..X'
        s3+='XXX'
        s4+='..X'
        s5+='XXX'
    elif line[i]=='4':
        s1+='X.X'
        s2+='X.X'
        s3+='XXX'
        s4+='..X'
        s5+='..X'
    elif line[i]=='5':
        s1+='XXX'
        s2+='X..'
        s3+='XXX'
        s4+='..X'
        s5+='XXX'
    elif line[i]=='6':
        s1+='XXX'
        s2+='X..'
        s3+='XXX'
        s4+='X.X'
        s5+='XXX'
    elif line[i]=='7':
        s1+='XXX'
        s2+='..X'
        s3+='..X'
        s4+='..X'
        s5+='..X'
    elif line[i]=='8':
        s1+='XXX'
        s2+='X.X'
        s3+='XXX'
        s4+='X.X'
        s5+='XXX'
    elif line[i]=='9':
        s1+='XXX'
        s2+='X.X'
        s3+='XXX'
        s4+='..X'
        s5+='XXX'
    if i!=n-1:
        s1+='.'
        s2+='.'
        s3+='.'
        s4+='.'
        s5+='.'
print(s1)
print(s2)
print(s3)
print(s4)
print(s5)