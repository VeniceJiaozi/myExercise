#include<bits/stdc++.h>
using namespace std;
string str,str1;
void input(){
    while(1){
        cin>>str1;
        //str+=str1;
        for(int i=0;i<str1.size();i++){
            if(str1[i]=='E') return;
            else str+=str1[i];
        }
    }
}
int main()
{
    int a=0,b=0;
    input();
    //十一分制
    for(int i=0;i<str.size();i++){
        if(str[i]=='W') a++;
        if(str[i]=='L') b++;
        //a先11获胜
        if(a==11&&b<10){
            cout<<a<<":"<<b<<endl;
            a=0,b=0;
        }
        //b先11获胜
        else if(b==11&&a<10){
            cout<<a<<":"<<b<<endl;
            a=0,b=0;
        }
        //加赛
        else if(a>11&&a-b>=2){
            cout<<a<<":"<<b<<endl;
            a=0,b=0;
        }
        else if(b>11&&b-a>=2){
            cout<<a<<":"<<b<<endl;
            a=0,b=0;
        }
        //else if()
        
    }
    //if(a==0&&b==0) cout<<endl;
    cout<<a<<":"<<b<<endl<<endl;
    a=0,b=0;
    //二十一分制
    for(int i=0;i<str.size();i++){
        if(str[i]=='W') a++;
        if(str[i]=='L') b++;
        //a先11获胜
        if(a==21&&b<20){
            cout<<a<<":"<<b<<endl;
            a=0,b=0;
        }
        //b先11获胜
        else if(b==21&&a<20){
            cout<<a<<":"<<b<<endl;
            a=0,b=0;
        }
        //加赛
        else if(a>21&&a-b>=2){
            cout<<a<<":"<<b<<endl;
            a=0,b=0;
        }
        else if(b>21&&b-a>=2){
            cout<<a<<":"<<b<<endl;
            a=0,b=0;
        }
        //else if()
        
    }
    //if(a==0&&b==0) cout<<endl;
    cout<<a<<":"<<b<<endl;
    return 0;
}