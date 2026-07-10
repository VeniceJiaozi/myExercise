import math
a=input().split()
s=float(a[0])
v=float(a[1])
t1=math.ceil(s/v)
t2=10
t=t1+t2
h=t//60
m=t%60
if m==0:
    M=0
    H=8-h
else:
    M=60-m
    H=7-h
if H>=0:
    if M>9:
        print('0'+ str(H)+':'+str(M))
    else:
        print('0'+ str(H)+':0'+str(M))
else:
    H+=24
    if H>9:
        if M>9:
            print(str(H)+':'+str(M))
        else:
            print(str(H)+':0'+str(M))
    else:
        if M>9:
            print('0'+ str(H)+':'+str(M))
        else:
            print('0'+ str(H)+':0'+str(M))
   