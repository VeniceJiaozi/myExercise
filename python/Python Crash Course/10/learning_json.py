import json

numbers=[1,2,3,4,5]
file_name='numbers.json'

with open(file_name,'w')as f_obj:
    print(numbers)
    json.dump(numbers,f_obj)

with open(file_name)as f_obj:
    numbers1=json.load(f_obj)
    print(numbers1)