s=input().split()
try:
    a=int(s[0])
    b=int(s[1])
    print(a+b)
except ValueError:
    print('you are not sending numbers')