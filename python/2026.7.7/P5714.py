x=input().split()
m=float(x[0])
h=float(x[1])
bmi=m/(h*h)
if bmi<18.5:
    print("Underweight")
elif bmi<24:
    print("Normal")
else:
    print(f'{bmi:.6g}')
    print("Overweight")
