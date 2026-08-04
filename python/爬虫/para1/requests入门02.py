#爬取百度翻译
import requests

url="https://fanyi.baidu.com/sug"
url1='https://fanyi-cdn.cdn.bcebos.com/static/cat/asset/translating.10fcdcb9.png'
url2='https://fanyi.baidu.com/ai/smartSug'

s=input("请输入你想要翻译的内容：")
data={
    "kw":s
}

#发送post请求
resp=requests.post(url2,data=data)

#获取响应内容
print(resp.json())