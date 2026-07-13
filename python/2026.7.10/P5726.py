n=int(input())
line=input().split()
tol=max=ans=0;min=11
for i in range(n):
    tol+=int(line[i])
    if int(line[i])>max:
        max=int(line[i])
    if int(line[i])<min:
        min=int(line[i])
ans=(tol-min-max)/(n-2)
print(f"{ans:.2f}")