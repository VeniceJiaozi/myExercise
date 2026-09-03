#include<bits/stdc++.h>
using namespace std;
int a[125][125];
int divi[125][125];
long long ans=-0x7f7f7f;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    divi[1][1]=a[1][1];
    for(int i=2;i<=n;i++){
        for(int j=2;j<=n;j++){
            divi[i][0]=a[i][0]+divi[i-1][0];
            divi[0][j]=a[0][j]+divi[0][j-1];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            divi[i][j]=divi[i-1][j]+divi[i][j-1]-divi[i-1][j-1]+a[i][j];
        }
    }
    for(int x_1=1;x_1<=n;x_1++){
        for(int y_1=1;y_1<=n;y_1++){
            for(int x_2=x_1;x_2<=n;x_2++){
                for(int y_2=y_1;y_2<=n;y_2++){
                    long long curr=divi[x_2][y_2]-divi[x_1-1][y_2]-divi[x_2][y_1-1]+divi[x_1-1][y_1-1];
                    ans=max(ans,curr);
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}