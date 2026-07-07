s=input().split()
s[0]=int(s[0])
s[1]=int(s[1])
s[2]=int(s[2])
if s[0]==s[1] and s[1]==s[2]:
    print('Acute triangle')
    print("Isosceles triangle")
    print("Equilateral triangle")
else:
    #make s[0] the largest
    for i in range(3):
        for j in range(i+1,3):
            if s[i]<s[j]:
                s[i],s[j]=s[j],s[i]
    if s[0]>=s[1]+s[2]:
        print("Not triangle")
    else:
        if s[0]**2==s[1]**2+s[2]**2:
          print("Right triangle")
        if s[0]**2<s[1]**2+s[2]**2:
            print("Acute triangle")
        if s[0]**2>s[1]**2+s[2]**2:
            print("Obtuse triangle")
        if s[0]==s[1] or s[1]==s[2]:
            print("Isosceles triangle")