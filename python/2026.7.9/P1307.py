n=input()
ans=''
ans1=''
if n=='0':
    print(0)
elif n[0]=='-':
    ans+='-'
    #print(ans)
    ans1=n.rstrip('0')
    for i in range(len(ans1)-1):
        ans+=ans1[len(ans1)-i-1]
else:
    ans1=n.rstrip('0')
    for i in range(len(ans1)-1):
        ans+=ans1[len(ans1)-i-1]

print(ans)
