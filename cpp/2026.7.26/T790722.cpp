#include<bits/stdc++.h>
using namespace std;
const int maxv=10000000;
int spf[maxv+1];
void initspf(){
    spf[0]=0;spf[1]=1;
    for(int i=2;i<=maxv;i++){
        if(!spf[i]){
            spf[i]=i;
            if((long long)i*i<=maxv){
                for(int j=i*i;j<=maxv;j+=i){
                    if(!spf[j]){
                        spf[j]=i;
                    }
                }
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    initspf();
    long long x,y,ans=1,t;
    cin>>t;
    while(t--){
        ans=1;
        cin>>x>>y;
        //接下来获取x,y的质因数分解
        vector<int>fx,fy;
        while(x>1){
            int p=spf[x];
            fx.push_back(p);
            while(x%p==0&&x>1){
                x/=p;
            }
        }
        while(y>1){
            int p=spf[y];
            fy.push_back(p);
            while(y%p==0&&y>1){
                y/=p;
            }
        }
        //接下来求fx和fy的交集
        int l=0,r=0;//左指针指fx，右指针指fy
        while(l<fx.size()&&r<fy.size()){
            if(fx[l]==fy[r]){
                l++;r++;
            }
            else if(fx[l]<fy[r]){
                //左边小，左边独有
                ans*=fx[l];
                l++;
            }
            else{
                //右边小，右边独有
                ans*=fy[r];
                r++;
            }
        }
        while(l<fx.size()){
            ans*=fx[l];
            l++;
        }
        while(r<fy.size()){
            ans*=fy[r];
            r++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}