#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned long long n,m,num=0;
    string s,ans;
    cin>>n>>s>>m;
    if(s=="0"){
        cout<<0<<endl;
        return 0;
    }
    int len=s.size();
    //n转10
    for(int i=0;i<len;i++){
        int cur;
        if(s[i]>='0'&&s[i]<='9')cur=s[i]-'0';
        else{
            if(s[i]>='A'&&s[i]<='Z')
                cur=s[i]-'A'+10;
            else cur=s[i]-'a'+10;
        }
        num=num*n+cur;
    }
    //10转m
    while(num){
        int cur=num%m;
        if(cur<10)ans+=cur+'0';
        else ans+=cur-10+'A';
        num/=m;
    }
    //cout<<num<<endl;
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
    return 0;
}