#include<bits/stdc++.h>
using namespace std;
int i=0,ans1=0,ans2=0;
string str;
int main(){
    cin>>str;
    for(i=0;i<str.length();i++){
        if(str[i]=='b')ans1++;
        if(str[i]=='g')ans2++;
        if(str[i]=='o'&&str[i-1]!='b')ans1++;
        if(str[i]=='y'&&str[i-1]!='o')ans1++;
        if(str[i]=='i'&&str[i-1]!='g')ans2++;
        if(str[i]=='r'&&str[i-1]!='i')ans2++;
        if(str[i]=='l'&&str[i-1]!='r')ans2++;
    }
    cout<<ans1<<endl<<ans2;
    return 0;
}