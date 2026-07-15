#include<bits/stdc++.h>
using namespace std;
int n,i,ans;
string str;
int main(){
    cin>>n>>str;
    //cin.ignore();
    //getline(cin,str);
    for(i=1;i<n;i++){
        if(str[i-1]=='V'&&str[i]=='K'){
            str[i-1]='x';str[i]='x';
            ans++;
        }
    }
    for(i=1;i<n;i++){
        if(str[i-1]=='K'&&str[i]=='K'){
            ans++;
            cout<<ans;
            return 0;
        }
        if(str[i-1]=='V'&&str[i]=='V'){
            ans++;
            cout<<ans;
            return 0;
        }
    }
    cout<<ans<<endl;
    return 0;
}