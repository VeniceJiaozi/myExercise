#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;int n;
    scanf("%d",&n);
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(str[i]+n<='z'){
            str[i]+=n;
        }
        else{
            str[i]+=n;
            str[i]-=26;
        }
    }
    cout<<str;
    return 0;
}