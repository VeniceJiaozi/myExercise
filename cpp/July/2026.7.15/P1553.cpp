#include<bits/stdc++.h>
using namespace std;
string str;int i;
//处理末尾0
string zh(string s){
    int j=s.length()-1;
    while(s[j]=='0')j--;
    return s.substr(0,j+1);
}
//反转字符串
string fanz(string s){
    string s1=s;
    for(int j=0;j<s.length();j++){
        s1[s.length()-1-j]=s[j];
    }
    return s1;
}
//处理小数部分前导零
string xi(string s){
    //小数部分为零
    if(s=="0"){
        return s;
    }
    else{
        int j=0;
        while(s[j]=='0')j++;
        return s.substr(j);
    }
}
int main(){
    cin>>str;
    //判断str=0特殊情况
    if(str=="0"){
        cout<<0;
        return 0;
    }
    for(i=0;i<str.length();i++){
        //小数
        if(str[i]=='.'){
            string zheng=str.substr(0,i);
            string xiao=str.substr(i+1);
            if(zheng!="0")zheng=fanz(zh(zheng));
            xiao=fanz(xi(xiao));
            cout<<zheng<<"."<<xiao<<endl;
            return 0;
            //cout<<fanz(zh(zheng));
        }
        //分数
        if(str[i]=='/'){
            string zi=str.substr(0,i);
            string mu=str.substr(i+1);
            if(zi!="0")zi=fanz(zh(zi));
            mu=fanz(zh(mu));
            cout<<zi<<"/"<<mu<<endl;
            return 0;
        }
        //百分数
        if(str[i]=='%'){
            //零的情况
            if(str=="0%"){
                cout<<"0%"<<endl;
                return 0;
            }
            string bai=str.substr(0,i);
            bai=fanz(zh(bai));
            cout<<bai<<"%"<<endl;
            return 0;
        }
    }
    //都不符合即为整数
    cout<<fanz(zh(str));
    return 0;
}