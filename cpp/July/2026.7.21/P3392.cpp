#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    char c[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>c[i][j];
        }
    }
    int ans=0,ANS=0x3f3f3f3f;
    // for(int i=0;i<m;i++){
    //     if(c[0][i]!='W')ans++;
    // }
    for(int i=0;i<n-1;i++){
        //从第0到i行为白
        for(int j=i+1;j<n-1;j++){
            ans=0;
            //从第i+1行到j行为蓝，从第j+1到n-1行为红
            for(int k=0;k<=i;k++){
                for(int l=0;l<m;l++){
                    if(c[k][l]!='W')ans++;
                }
            }
            for(int k=i+1;k<=j;k++){
                for(int l=0;l<m;l++){
                    if(c[k][l]!='B')ans++;
                }
            }
            for(int k=j+1;k<n;k++){
                for(int l=0;l<m;l++){
                    if(c[k][l]!='R')ans++;
                }
            }
            if(ans<ANS)ANS=ans;
        }
    }
    cout<<ANS<<endl;
    return 0;
}