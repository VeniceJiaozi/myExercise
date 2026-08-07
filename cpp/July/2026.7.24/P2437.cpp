#include<bits/stdc++.h>
using namespace std;
string jia(string x,string y){
    int lena=x.size();
    int lenb=y.size();
    int len=max(lena,lenb);
    int a[len+5],b[len+5],c[len+5];
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    for(int i=0;i<lena;i++){
        a[lena-i-1]=x[i]-'0';
    }
    for(int i=0;i<lenb;i++){
        b[lenb-i-1]=y[i]-'0';
    }
    for(int i=0;i<len;i++){
        c[i]+=a[i]+b[i];
        if(c[i]>=10){
            c[i+1]+=c[i]/10;
            c[i]%=10;
        }
    }
    int pos=len+1;
    while(c[pos]==0&&pos>0){
        pos--;
    }
    string ans="";
    for(int i=pos;i>=0;i--){
        ans+=c[i]+'0';
    }
    return ans;
}
int main(){
    int n,m;
    cin>>m>>n;
    vector<string> a(n+5,"0");
    a[0]="1";a[1]="1";a[2]="1";
    if(n-m+1<3){
        cout<<1<<endl;
        return 0;
    }
    for(int i=3;i<=n-m+1;i++){
        a[i]=jia(a[i-1],a[i-2]);
    }
    cout<<a[n-m+1]<<endl;
    return 0;
}