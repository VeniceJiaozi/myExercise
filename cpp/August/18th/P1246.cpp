#include<bits/stdc++.h>
using namespace std;
// long long jiecheng(int x){
//     long long ans=1;
//     for(int i=1;i<=x;i++)
//         ans*=i;
//     return ans;
// }
//计算组合数,a在下,b在上
long long c(int a,int b){
    if(b==0)return 1;
    long long ans=1;
    for(int i=1;i<=b;i++){
        ans*=a-i+1;
        ans/=i;
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    int n=s.size();
    //判断是否存在
    for(int i=0;i<n-1;i++){
        if(s[i]>=s[i+1]){
            cout<<0;
            return 0;
        }
    }
    //计算
    long long ans=0;
    for(int i=1;i<n;i++){
        ans+=c(26,i);
    }
    for(int i=0;i<n;i++)
        for(char j=(i==0?'a':s[i-1]+1);j<s[i];j++)
            ans+=c('z'-j,n-i-1);
    ans++;
    cout<<ans;
    return 0;
}