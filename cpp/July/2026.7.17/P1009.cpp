#include<bits/stdc++.h>
using namespace std;
string cheng(const string &a,const string &b){
    int len=a.size()+b.size();
    int x[len+5],y[len+5],z[len+5];
    memset(x,0,sizeof(x));
    memset(y,0,sizeof(y));
    memset(z,0,sizeof(z));
    for(int i=0;i<a.size();i++){
        x[i]=a[a.size()-i-1]-'0';
    }
    for(int i=0;i<b.size();i++){
        y[i]=b[b.size()-i-1]-'0';
    }
    for(int i=0;i<b.size();i++){
        for(int j=0;j<a.size();j++){
            z[i+j]+=x[j]*y[i];
            z[i+j+1]+=z[i+j]/10;
            z[i+j]%=10;
        }
    }
    string ans="";
    if(z[len]){
        ans+=char(z[len]+'0');
    }
    for(int i=len-1;i>=0;i--){
        ans+=char(z[i]+'0');
    }
    return ans;
}
string jia(const string &a,const string &b){
    int len=max(a.size(),b.size());
    int x[len+5],y[len+5],z[len+5];
    memset(x,0,sizeof(x));
    memset(y,0,sizeof(y));
    memset(z,0,sizeof(z));
    for(int i=0;i<a.size();i++){
        x[i]=a[a.size()-i-1]-'0';
    }
    for(int i=0;i<b.size();i++){
        y[i]=b[b.size()-i-1]-'0';
    }
    for(int i=0;i<len;i++){
        z[i]+=x[i]+y[i];
        z[i+1]+=z[i]/10;
        z[i]%=10;
    }
    string ans="";
    if(z[len]){
        ans+=char(z[len]+'0');
    }
    for(int i=len-1;i>=0;i--){
        ans+=char(z[i]+'0');
    }
    return ans;
} 
//string jiecheng(string &a){}
int main(){
    int n;
    cin>>n;
    string ans1="1",ANS="0";
    for(int i=1;i<=n;i++){
        ans1="1";
        for(int j=1;j<=i;j++){
            ans1=cheng(ans1,to_string(j));
        }
        ANS=jia(ANS,ans1);
    }
    int i=0;
    while(ANS[i]=='0'){
        i++;
    }
    ANS=ANS.substr(i);
    cout<<ANS<<endl;
    return 0;
}