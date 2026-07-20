#include<bits/stdc++.h>
using namespace std;
bool cmp(string a,string b){
    if(a.size()!=b.size())return a.size()>b.size();
    else{
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i])return a[i]>b[i];
        }
    }
    return false;
}
int main(){
    int n;
    scanf("%d",&n);
    string ans="0",a;
    int ans1=0;
    for(int i=0;i<n;i++){
        cin>>a;
        if(cmp(a,ans)){ans=a;
        ans1=i+1;}
    }
    cout<<ans1<<endl;
    cout<<ans<<endl;
    return 0;
}