#include<bits/stdc++.h>
using namespace std;
int n,m;bool lei[102][102];int ans[102][102];char x;
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>x;
            if(x=='*'){
                lei[i][j]=1;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(lei[i][j]==1){
                ans[i][j+1]++;
                ans[i+1][j]++;
                ans[i+1][j+1]++;
                ans[i-1][j]++;
                ans[i][j-1]++;
                ans[i-1][j-1]++;
                ans[i-1][j+1]++;
                ans[i+1][j-1]++;
            }       
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(lei[i][j]==1){
                cout<<"*";
            }
            else cout<<ans[i][j];
        }
        cout<<endl;
    }
    return 0;
}