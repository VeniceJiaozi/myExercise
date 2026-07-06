import math
a=input().split()
s=float(a[0])
v=float(a[1])
t1=math.ceil(s/v)
t2=10
t=t1+t2
h=t//60
m=t%60
H=7-h
M=60-m
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
   