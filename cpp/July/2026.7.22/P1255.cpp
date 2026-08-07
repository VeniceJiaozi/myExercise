#include<bits/stdc++.h>
using namespace std;
string jia(string a,string b){
    int lena=a.size(),lenb=b.size();
    int len=max(lena,lenb);
    string ans="";
    int x[len+5],y[len+5],z[len+5];
    memset(x,0,sizeof(x));
    memset(y,0,sizeof(y));
    memset(z,0,sizeof(z));
    for(int i=0;i<lena;i++){
        x[lena-i-1]=a[i]-'0';
    }
    for(int i=0;i<lenb;i++){
        y[lenb-i-1]=b[i]-'0';
    }
    for(int i=0;i<len+1;i++){
        z[i]+=x[i]+y[i];
        if(z[i]>=10){
            z[i+1]+=z[i]/10;
            z[i]%=10;
        }
    }
    int top=len+1;
    while(top>0&&z[top]==0)top--;
    for(int i=top;i>=0;i--){
        ans+=z[i]+'0';
    }
    return ans;
}

int main()
{
    int n;
    scanf("%d",&n);
    if(n==1){
        printf("1");
        return 0;
    }
    vector<string> a(n+1);
    a[0]="1";a[1]="1";
    for(int i=2;i<=n;i++){
        a[i]=jia(a[i-1],a[i-2]);
    }
    // int pos=a[n].find_first_not_of('0');
    // a[n]=a[n].substr(pos);
    cout<<a[n]<<endl;
}