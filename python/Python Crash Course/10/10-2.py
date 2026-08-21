file_path=r'E:\vscodeProject\python\Python Crash Course\10\learning_python.txt'

with open(file_path) as file_object:
    messages=file_object.readlines()
    for line in messages:
        line=line.replace('python','C')
        print(line.rstrip())
'''
message.replace('python','C')
print(message.rstrip())
'''
