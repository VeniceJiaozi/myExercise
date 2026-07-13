

def main():
    shou=yu=cun=0
    for i in range(12):
        if shou<0:
            print(-i)
            return
        shou+=300
        yu=int(input())
        if shou-yu>=100:
            cun+=100*((shou-yu)//100)
            shou-=100*((shou-yu)//100)
        shou-=yu
    print(int(shou+cun*1.2))

main()