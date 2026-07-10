n=int(input())
sum=1

def pri(i):
    if i<10:
        print('0'+str(i),end='')
    else:
        print(str(i),end='')

#sqaure
for i in range(n):
    for j in range(n):
        pri(sum)
        sum+=1
    print('')

print('')

#triangle
sum=1
for i in range(n):
    print('  '*(n-1-i),end='')
    for j in range(i+1):
        pri(sum)
        sum+=1
    print('')
