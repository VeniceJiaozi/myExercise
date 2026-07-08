s=input().split()
n=int(s[0])
k=int(s[1])
a=b=num1=num2=0
for i in range(1,n+1):
    if i%k==0:
        a+=i
        num1+=1
    else:
        b+=i
        num2+=1
a/=num1
b/=num2
print(f'{a:.1f}',f'{b:.1f}')