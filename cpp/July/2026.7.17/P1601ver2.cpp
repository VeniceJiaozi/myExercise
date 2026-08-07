#include<bits/stdc++.h>
using namespace std;
string a,b;
int lena,lenb,len;
int ans[600],jinwei[600],x[600],y[600];
int main(){
    //输入并倒序存储
    cin>>a>>b;
    lena=a.length(),lenb=b.length();
    for(int i=0;i<lena;i++){
        x[i]=a[lena-i-1]-'0';
    }
    for(int i=0;i<lenb;i++){
        y[i]=b[lenb-i-1]-'0';
    }

    //计算
    len=max(lena,lenb);
    for(int i=0;i<len;i++){
        ans[i]=x[i]+y[i]+jinwei[i];
        if(ans[i]>=10){
            jinwei[i+1]=1;
            ans[i]-=10;
        }
    }

    //输出
    if(jinwei[len]==1) cout<<jinwei[len];
    for(int i=len-1;i>=0;i--){
        cout<<ans[i];
    }
    return 0;
}