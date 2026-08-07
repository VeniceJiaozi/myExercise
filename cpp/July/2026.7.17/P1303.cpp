#include<bits/stdc++.h>
using namespace std;
string a,b;
int x[2005],y[2005],ans[20005];
int lena,lenb,len;
int main(){
    //输入并对齐
    cin>>a>>b;
    if(a=="0"||b=="0"){
        cout<<"0";
        return 0;
    }
    lena=a.length();
    lenb=b.length();
    len=lena+lenb;
    for(int i=0;i<lena;i++){
        x[i]=a[lena-i-1]-'0';
    }
    for(int i=0;i<lenb;i++){
        y[i]=b[lenb-i-1]-'0';
    }
    //竖式计算
    for(int i=0;i<lena;i++){
        for(int j=0;j<lenb;j++){
            ans[i+j]+=x[i]*y[j];
            ans[i+j+1]+=ans[i+j]/10;
            ans[i+j]%=10;
        }
    }
    //输出
    if(ans[len-1]!=0)cout<<ans[lena+lenb-1];
    for(int i=len-2;i>=0;i--){
        cout<<ans[i];
    }
    return 0;
}