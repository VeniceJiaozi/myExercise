#include<bits/stdc++.h>
using namespace std;
string expand(){
    string ans="",x;//ans表示解压后的密码，x为下一层解压后的密码
    char c;
    int num;//本层密码需要重复num次
    while(cin>>c){
        if(c=='\n')break;
        if(c=='['){
            cin>>num;
            x=expand();//递归
            while(num--){
                ans+=x;//将解压后的密码复制num次
            }
        }
        else{
            if(c==']')return ans;
            else ans+=c;//如果c不是'['或']'，则直接将c加入ans
        }
    }
    return ans;
}
int main(){
    cout<<expand();
    return 0;
}