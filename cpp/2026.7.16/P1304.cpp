#include<bits/stdc++.h>
using namespace std;
bool a[100005];
void chuli(int n){
    for(int i=2;i<=n;i++){
        for(int j=2;j<=n;j++){
            if(a[i]&&a[j]&&i+j==n){
                printf("%d=%d+%d\n",n,i,j);
                return; 
            }
        }
    }
}
void shai(int n){
    for(int i=2;i<=n;i++){
        a[i]=true;
    }
    for(int i=2;i<=n;i++){
        if(a[i]==true){
            for(int j=2*i;j<=n;j+=i){
                a[j]=false;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    shai(n);
    for(int i=4;i<=n;i+=2){
        chuli(i);
    }
    return 0;
}