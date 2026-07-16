#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        if(b*7+c*3>=800&&b+c>140)cout<<"Excellent"<<endl;
        else cout<<"Not excellent"<<endl;
    }
    return 0;
}