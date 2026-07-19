#include<bits/stdc++.h>
using namespace std;
string cheng(string a,string b){
    int x[100005]={0},y[100005]={0},c[100005]={0};
    int lena=a.size(),lenb=b.size();
    int len=lena+lenb;
    //倒置
    for(int i=0;i<lena;i++){
        x[lena-i-1]=a[i]-'0';
    }
    for(int i=0;i<lenb;i++){
        y[lenb-i-1]=b[i]-'0';
    }
    //乘法
    for(int i=0;i<lena;i++){
        for(int j=0;j<lenb;j++){
            c[i+j]+=x[i]*y[j];
            c[i+j+1]+=c[i+j]/10;
            c[i+j]%=10;
        }
    }
    //输出
    string ans1="";
    for(int i=0;i<len;i++){
        ans1+=c[len-i-1]+'0';
    }
    size_t pos=ans1.find_first_not_of('0');
    if(pos!=string::npos){
        ans1=ans1.substr(pos);
    }
    else{
        ans1="0";
    }
    return ans1;
}
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;char a;int tol=0;
        string ans="1";
        cin>>n>>a;
        for(int j=1;j<=n;j++){
            ans=cheng(ans,to_string(j));
        }
        //cout<<ans<<endl;调试
        for(int j=0;j<ans.size();j++){
            if(ans[j]==a){
                tol++;
            }
        }
        cout<<tol<<endl;
    }
    return 0;
}