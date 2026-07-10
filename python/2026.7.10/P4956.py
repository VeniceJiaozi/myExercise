n=int(input())
n/=52

def main(n):
    for k in range(1,100000):
        for x in range(1,10000):
            if x*7+k*21==n and x<=100:
                print(x)
                print(k)
                return
            
main(n)
