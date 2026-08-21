#include<bits/stdc++.h>
using namespace std;
const int MAXN=1005;
int n,m;
int d[MAXN][MAXN];//差分数组
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    //输入并处理
    for(int i=0;i<m;i++){
        int x_1,x_2,y_1,y_2;
        cin>>x_1>>y_1>>x_2>>y_2;
        for(int i=x_1;i<=x_2;i++){
            //第x1行到第x2行
            d[i][y_1]++;
            d[i][y_2+1]--;
        }
    }
    //输出
    for(int i=1;i<=n;i++){
        int curr=0;
        for(int j=1;j<=n;j++){
            curr+=d[i][j];
            cout<<curr<<" ";
        }
        cout<<endl;
    }
    return 0;
}