#include<bits/stdc++.h>
using namespace std;
bool zhi(int n){//判断是否为质数
    if(n<=1)return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}
int main(){
    int n,k;
    int ans=0;
    scanf("%d%d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    vector<bool> mask;
    for(int i=0;i<n-k;i++){
        mask.push_back(false);
    }
    for(int i=0;i<k;i++){
        mask.push_back(true);
    }
    int cur=0;
    do{
        cur=0;
        for(int i=0;i<n;i++){
            if(mask[i]){
                cur+=a[i];
            }
        }
        if(zhi(cur))ans++;
    }while(next_permutation(mask.begin(),mask.end()));
    printf("%d\n",ans);
    return 0;
}