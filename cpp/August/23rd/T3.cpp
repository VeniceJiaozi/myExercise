#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    string s;
    cin>>s;
    unsigned long long sum=0;
    //转化为十进制
    for(int i=n-1;i>=0;i--){
        if(s[i]>='0'&&s[i]<='9'){
            sum*=16;
            sum+=s[i]-'0';
        }
        else{
            sum*=16;
            sum+=s[i]-'A'+10;
        }
    }
    //转化为二进制
    vector<int> ans;
    while(sum){
        ans.push_back(sum%2);
        sum/=2;
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
        cout<<ans[i];
    return 0;
}