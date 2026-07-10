n=int(input())
def ji(x):
    #global length
    if x==1:
        #length+=1
        #s.append(1)
        return
    x*=3;x+=1
    if x%2==1:
        #length+=1
        s.append(x)
        ji(x)
    else:
        #length+=1
        s.append(x)
        ou(x)

def ou(x):
    global length
    if x==1:
        #length+=1
        #s.append(1)
        return
    x//=2
    if x%2==1:
        #length+=1
        s.append(x)
        ji(x)
    else:
        #length+=1
        s.append(x)
        ou(x)

s=[];#length=1
s.append(n)
if n%2==0:
    ou(n)
else:
    ji(n)

for i in range(len(s)):
    print(s[len(s)-1-i],end=' ')