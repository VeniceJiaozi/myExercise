s=input().split()
a=float(s[0])
b=float(s[1])
c=float(s[2])
p=(a+b+c)/2
area=(p*(p-a)*(p-b)*(p-c))**0.5
print(f"{area:.1f}")