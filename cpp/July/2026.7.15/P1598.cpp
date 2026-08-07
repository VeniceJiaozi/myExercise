#include<bits/stdc++.h>
using namespace std;
int i,j,maxn,l[26];
int main(){
    string str;
    //统计每个字母出现次数
    for(i=0;i<4;i++){
        getline(cin,str);
        for(j=0;j<str.length();j++){
            if(str[j]<='Z'&&str[j]>='A'){
                l[str[j]-'A']++;
            }
        }
    }
    //统计最大次数
    for(i=0;i<26;i++){
        if(l[i]>maxn)maxn=l[i];
    }
    //制表
    for(i=0;i<maxn;i++){
        for(j=0;j<26;j++){
            if(l[j]>=maxn-i){
                if(j==25)cout<<"*"<<endl;
                else cout<<"* ";
            }
            else{
                if(j==25)cout<<" "<<endl;
                else cout<<"  ";
            }
        }
    }
    cout<<"A B C D E F G H I J K L M N O P Q R S T U V W X Y Z";
    return 0;
}