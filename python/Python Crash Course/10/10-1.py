file_path=r'E:\vscodeProject\python\Python Crash Course\10\learning_python.txt'

with open(file_path) as file_object:
    contents=file_object.read()
    print(contents)

with open(file_path) as file_object:
    for line in file_object:
        print(line.rstrip())

with open(file_path) as file_object:
    lines=file_object.readlines()

for line in lines:
    print(line.rstrip())