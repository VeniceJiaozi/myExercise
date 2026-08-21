user_name=input('请输入您的用户名')
file_name='guest.txt'

with open(file_name,'w') as file_object:
    file_object.write(user_name)