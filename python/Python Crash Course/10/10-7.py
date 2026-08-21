while 1:
    s=input().split()
    try:
        a=int(s[0])
        b=int(s[1])
        if a==0 and b==0:
            break
        print(a+b)
    except ValueError:
        print('you are not sending numbers')