line=input().split()
n=int(line[0])
huan=0
for i in range(1,len(line)):
    for j in range(int(line[i])):
        if huan==n:
            print('')
            huan=0
        if i%2==1:
            print('0',end='')
        else:
            print('1',end='')
        huan+=1