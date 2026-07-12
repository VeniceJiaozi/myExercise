n=int(input())
l=[[1 for i in range(n)]for i in range(n)]
l[0][0]=1
for i in range(n):
    for j in range(i):
        if j==0 or j==i:
            l[i][j]=1
        else:
            l[i][j]=l[i-1][j-1]+l[i-1][j]
for i in range(n):
    """
    for j in range(i):
        print(l[i][j],end=' ')
    print('')
    """
    print(' '.join(map(str,l[i][:i+1])))