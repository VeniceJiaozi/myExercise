#include<bits/stdc++.h>
using namespace std;
int main(){
    //输入
    string a,b;long long len;
    cin>>a>>b;
    int lena=a.size(),lenb=b.size();
    vector<int> x,y,ans,jinwei;
    for(int i=0;i<lena;i++){
        x.push_back(a[lena-i-1]-'0');
    }
    for(int i=0;i<lenb;i++){
        y.push_back(b[lenb-i-1]-'0');
    }
    //int len=max(lena,lenb);
    //补位
    if(lena<=lenb){
        len=lenb;
        for(int i=0;i<len-lena;i++){
            x.push_back(0);
        }
    }
    if(lenb<lena){
        len=lena;
        for(int i=0;i<len-lenb;i++){
            y.push_back(0);
        }
    }
    //计算
    jinwei.push_back(0);//首位进位为零
    for(int i=0;i<len;i++){
        ans.push_back(x[i]+y[i]+jinwei[i]);
        if(ans[i]>=10){
            ans[i]-=10;
            jinwei.push_back(1);
        }
        else{
            jinwei.push_back(0);
        }
    }
    //输出
    if(ans[len]==0){
        for(int i=ans.size()-1;i>=0;i--){
            cout<<ans[i];
        }
    }
    else{
        for(int i=ans.size();i>=0;i--){
            cout<<ans[i];
        }
    return 0;
    }
}