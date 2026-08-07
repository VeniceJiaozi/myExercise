#include<bits/stdc++.h>
using namespace std;
string cheng(string a,string b)
{
    int lena=a.size();
    int lenb=b.size();
    int len=lena+lenb;
    int x[len];
    memset(x,0,sizeof(x));
    int y[len];
    memset(y,0,sizeof(y));
    int c[max(len,520)];
    memset(c,0,sizeof(c));
    string ans1="";
    for(int i=0;i<lena;i++)
    {
        x[lena-i-1]=a[i]-'0';
    }
    for(int i=0;i<lenb;i++)
    {
        y[lenb-i-1]=b[i]-'0';
    }
    for(int i=0;i<lena;i++)
    {
        for(int j=0;j<lenb;j++)
        {
            c[i+j]+=x[i]*y[j];
            c[i+j+1]+=c[i+j]/10;
            c[i+j]%=10;
        }
    }
    for(int i=510;i>=0;i--)
    {
        ans1+=c[i]+'0';
    }
    return ans1;
}
int main()
{
    int p;
    cin>>p;
    string ans="1";string base="2";
    // for(int i=0;i<p;i++)
    // {
    //     ans=cheng(ans,to_string(2));
    //     //cout<<ans<<endl;
    // }
    int size=p*log10(2)+1;
    // size_t pos=ans.find_first_not_of("0");
    // cout<<ans.size()-pos<<endl;
    cout<<size<<endl;
    while(p>0){
        if(p&1)
        {
            ans=cheng(ans,base);
        }
        p>>=1;
        base=cheng(base,base);
    }
    cout<<ans.substr(ans.size()-500,50)<<endl;
    cout<<ans.substr(ans.size()-450,50)<<endl;
    cout<<ans.substr(ans.size()-400,50)<<endl;
    cout<<ans.substr(ans.size()-350,50)<<endl;
    cout<<ans.substr(ans.size()-300,50)<<endl;
    cout<<ans.substr(ans.size()-250,50)<<endl;
    cout<<ans.substr(ans.size()-200,50)<<endl;
    cout<<ans.substr(ans.size()-150,50)<<endl;
    cout<<ans.substr(ans.size()-100,50)<<endl;
    cout<<ans.substr(ans.size()-50,49);
    cout<<ans[ans.size()-1]-'0'-1<<endl;

    return 0;
}