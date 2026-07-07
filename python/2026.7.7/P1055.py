s=input().replace('-','')
ans=0
for i in range(9):
    ans+=int(s[i])*(i+1)
ans%=11
ans=str(ans)
if ans=='10' and s[9]=='X':
    print('Right')
if ans==s[9]:
    print('Right')
if ans=='10' and s[9]!='X':
        print(s[0]+'-'+s[1:4]+'-'+s[4:9]+'-X')
if ans!='10' and ans!=s[9]:
    ans=str(ans)
    print(s[0]+'-'+s[1:4]+'-'+s[4:9]+'-'+ans)