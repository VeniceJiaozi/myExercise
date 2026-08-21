file_path='E:/vscodeProject/python/Python Crash Course/10/pi_digits.txt'
with open(file_path) as file_object:
    lines=file_object.readlines()

pi_string=''
for line in lines:
    pi_string+=line.strip()
    #print(line.rstrip())

print(pi_string)
print(len(pi_string))