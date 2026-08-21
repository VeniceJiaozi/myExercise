import json
file_name='user_name.json'
user_name=input('请输入用户名')

try:
    with open(file_name,'r')as f_obj:
        pre_user_name=json.load(f_obj)
        if(pre_user_name==user_name):
            print("你好 "+user_name)
        else:
            f_obj.close()
            with open(file_name,'w')as f_obj:
                json.dump(user_name,f_obj)
                print("你好 "+user_name)
except FileNotFoundError:
    with open(file_name,'w')as f_obj:
        json.dump(user_name,f_obj)