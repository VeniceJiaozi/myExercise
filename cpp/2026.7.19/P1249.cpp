#include<bits/stdc++.h>
using namespace std;
string cheng(string a,string b){
    int n=a.size(),m=b.size();
    int x[n+m],y[n+m],z[n+m];
    string ans1="";
    memset(x,0,sizeof(x));
    memset(y,0,sizeof(y));
    memset(z,0,sizeof(z));
    for(int i=0;i<n;i++){
        x[n-i-1]=a[i]-'0';
    }
    for(int i=0;i<m;i++){
        y[m-i-1]=b[i]-'0';
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            z[i+j]+=x[i]*y[j];
            z[i+j+1]+=z[i+j]/10;
            z[i+j]%=10;
        }
    }
    for(int i=0;i<n+m;i++){
        ans1+=z[n+m-i-1]+'0';
    }
    size_t pos=ans1.find_first_not_of('0');
    ans1=ans1.substr(pos);
    return ans1;
}
int main(){
    int n;
    cin>>n;
    if(n==3||n==4){
        cout<<n<<endl<<n;
        return 0;
    }
    int sum=0,cur=2;
    vector<int> s;//存储拆出来的数
    while(n>=sum+cur){
        s.push_back(cur);
        sum+=cur;cur++;
    }
    int rem=n-sum;
    for(int i=s.size()-1;i>=0&&rem>0;i--,rem--){
        s[i]++;
    }
    string ans="1";
    for(int i=0;i<s.size();i++){
        ans=cheng(ans,to_string(s[i]));
        cout<<s[i]<<" ";
    }
    cout<<endl;
    cout<<ans;
    return 0;
}