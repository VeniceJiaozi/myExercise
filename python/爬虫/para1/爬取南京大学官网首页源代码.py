#这只是一个练习，爬取了南京大学官网首页的源代码
from urllib.request import urlopen
url="https://www.nju.edu.cn/"
resp=urlopen(url)
#print(resp.read())
#print(resp.read().decode("utf-8"))
with open("nju_homepage.html",mode="w",encoding="utf-8") as f:
    f.write(resp.read().decode("utf-8"))
print("爬取成功")