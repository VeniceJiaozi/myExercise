#include<bits/stdc++.h>
using namespace std;
string str,str1,str2;
int start,i,ans=0,pos=-1;
string tolower(string s){
    for(i=0;i<s.length();i++){
        if('A'<=s[i]&&'Z'>=s[i]){
            s[i]+=32;
        }
    }
    return s;
}
int main(){
    cin>>str1;
    cin.ignore();
    getline(cin,str);
    str1=tolower(str1);//目标单词
    str=tolower(str);//文档
    i=0;
    //遍历文档
    while(i<str.length()){
        //跳过空格
        if(str[i]==' '){
            i++;
            continue;
        }
        start=i;
        //确定当前单词长度
        while(i<str.length()&&str[i]!=' '){
            i++;
        }
        str2=str.substr(start,i-start);
        if(str2==str1){
            ans++;
            if(pos==-1){
                pos=start;
            }
        }
    }
    if(pos==-1){
        cout<<pos;
    }
    else{
        cout<<ans<<" "<<pos;
    }
    return 0;
}