n,x,y=map(int,input().split())
l=input().split()
line=0
for i in range(len(l)):
    l[i]=int(l[i])+2
    if l[i]%x==0:
        line+=l[i]//x
    else:
        line+=l[i]//x+1
if line%y==0:
    print(line//y)
else:
    print(line//y+1)