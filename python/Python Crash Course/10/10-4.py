file_name='guests_book.txt'
user_name=''
with open(file_name,'a') as file_object:
    while 1:
        user_name=input()
        if user_name=='0':
            break
        print('hello'+user_name)
        file_object.write(user_name+'\n')