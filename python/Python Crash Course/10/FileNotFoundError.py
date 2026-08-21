file_name=r'E:\vscodeProject\python\Python Crash Course\10\Alice in Wonderland.txt'

try:
    with open(file_name)as f_obj:
        contents=f_obj.read()
except FileNotFoundError:
    msg='sorry, the file '+file_name+' is not found'
    print(msg)
else:
    words=contents.split()
    num_words=len(words)
    print('the file '+file_name+' has about '+str(num_words)+' words.')