x=int(input())
a=b=c=d=0
if x%2==0 and x>4 and x<=12:
    a=1
if x%2==0 or (x>4 and x<=12):
    b=1
if x%2==0 and (x<=4 or x>12):
    c=1
if x%2==1 and x>4 and x<=12:
    c=1
if x%2==1 and (x<=4 or x>12):
    d=1
print(a,b,c,d)