n=int(input())
num=1
for i in range(n):
    for j in range(n-i):
        if num<10:
            print('0'+str(num),end='')
            num+=1
        else:
            print(num,end='')
            num+=1
    print('')
