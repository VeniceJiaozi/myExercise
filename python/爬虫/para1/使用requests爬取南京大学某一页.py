import requests

query=input("请输入你想要查询的内容：")
url=f"https://www.nju.edu.cn/views/search/modules/resultpc/soso.html?query={query}"//将输入的内容作为查询内容

headers={
    "user-agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/151.0.0.0 Safari/537.36 Edg/151.0.0.0"
}#处理一个小小的反爬，通过使请求更像浏览器发出的请求
resp=requests.get(url, headers=headers)

print(resp)#获得响应状态码
print(resp.text)#获得页面源代码