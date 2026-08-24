#include<bits/stdc++.h>
using namespace std;
const int MAXN=1e6+5,MAXM=2e3+5;
int picture[MAXN];//存储图片
int drawer[MAXM];//每类画最后出现的位置
int l=1,ans_l,ans_r;//滑动窗口的左右端点
int ans=0x7fffffff;
int cnt=0;//记录窗口内有多少种不同的画
int main(){
    int n,m;
    cin>>n>>m;
    memset(drawer,-1,sizeof(drawer));
    for(int i=1;i<=n;i++){
        cin>>picture[i];
        if(drawer[picture[i]]==-1){
            cnt++;
        }
        drawer[picture[i]]=i;
        while(l!=i&&l<drawer[picture[l]])l++;
        if(cnt==m&&i-l+1<ans){
            ans=i-l+1;
            ans_l=l;
            ans_r=i;
        }
    }
    cout<<ans_l<<" "<<ans_r<<endl;
    return 0;
}