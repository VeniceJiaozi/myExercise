n=int(input())
f=[0]*n
if n==1:
    print('1.00')
elif n==0:
    print('0.00')
else:
    f[0]=f[1]=1
    for i in range(2,n):
      f[i]=f[i-1]+f[i-2]
    print(f"{f[n-1]:.2f}")