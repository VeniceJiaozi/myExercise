#include<bits/stdc++.h>
using namespace std;
struct node
{
    int h;
    int str;
};
bool cmp(node a,node b)
{
    return a.str<b.str;
}
int main()
{
    int n,s,a,b,sum=0,ans=0;
    cin>>n>>s>>a>>b;
    sum=a+b;
    vector<node> apple(n);
    for(int i=0;i<n;i++)
    {
        cin>>apple[i].h>>apple[i].str;
    }
    sort(apple.begin(),apple.end(),cmp);
    for(int i=0;i<n;i++){
        if(apple[i].str>s)break;
        if(apple[i].h<=sum){
            s-=apple[i].str;
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}