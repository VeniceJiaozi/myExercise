#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    long long a[n][m],b[n-1][m-1],c[n-2][m-2],d[n-3][m-3];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<m-1;j++){
            b[i][j]=a[i][j]*a[i+1][j+1]-a[i+1][j]*a[i][j+1];
        }
    }
    for(int i=0;i<n-2;i++){
        for(int j=0;j<m-2;j++){
            c[i][j]=b[i][j]*b[i+1][j+1]-b[i+1][j]*b[i][j+1];
        }
    }
    for(int i=0;i<n-3;i++){
        for(int j=0;j<m-3;j++){
            d[i][j]=c[i][j]*c[i+1][j+1]-c[i+1][j]*c[i][j+1];
        }
    }
    char ch;
    cin>>ch;
    if(ch=='A')
    {
        cout<<n<<" "<<m<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else if(ch=='B')
    {
        cout<<n-1<<" "<<m-1<<endl;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<m-1;j++){
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else if(ch=='C')
    {
        cout<<n-2<<" "<<m-2<<endl;
        for(int i=0;i<n-2;i++){
            for(int j=0;j<m-2;j++){
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else if(ch=='D')
    {
        cout<<n-3<<" "<<m-3<<endl;
        for(int i=0;i<n-3;i++){
            for(int j=0;j<m-3;j++){
                cout<<d[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}