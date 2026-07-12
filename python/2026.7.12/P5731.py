n=int(input())
num=2
l=[[0 for i in range(n+1)]for i in range(n+1)]
x=y=0
l[x][y]=1
'''
while num<=n**2:
    num+=1
    if l[x-1][y]==0 and x-1>=0:
        x-=1
    elif l[x][y+1]==0 and y+1<n:
        y+=1
    elif l[x+1][y]==0 and x+1<n:
        x+=1
    elif l[x][y-1]==0 and y-1>=0:
        y-=1
    
    l[x][y]=num
'''

#记录方向，到拐角改变方向
left=right=up=down=0
right=1
while num<=n**2:

    if right==1 and y+1<n and l[x][y+1]==0:
        y+=1
    elif right==1 and (y+1>=n or l[x][y+1]!=0):
        right=0;down=1;x+=1
    
    elif down==1 and x+1<n and l[x+1][y]==0:
        x+=1
    elif down==1 and (x+1>=n or l[x+1][y]!=0):
        down=0;left=1;y-=1
    
    elif left==1 and y-1>=0 and l[x][y-1]==0:
        y-=1
    elif left==1 and (y-1<0 or l[x][y-1]!=0):
        left=0;up=1;x-=1

    elif up==1 and l[x-1][y]==0:
        x-=1
    elif up==1 and l[x-1][y]!=0:
        up=0;right=1;y+=1

    l[x][y]=num
    num+=1

for i in range(n):
    print(' ',end='')
    for j in range(n):
        if l[i][j]<10:
            print(' '+str(l[i][j]),end=' ')
        else:
            print(l[i][j],end=' ')
    print('')