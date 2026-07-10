n=int(input())
line=input().split()
max=0;min=10001
for i in range(n):
    if int(line[i])>max:
        max=int(line[i])
    if int(line[i])<min:
        min=int(line[i])
print(max-min)