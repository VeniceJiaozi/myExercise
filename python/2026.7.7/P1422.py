s=int(input())
ans=0
if s<=150:
    print(s*0.4463)
elif s<=400:
    print(150*0.4463+(s-150)*0.4663)
else:
    print(150*0.4463+250*0.4663+(s-400)*0.5663)