#include<bits/stdc++.h>
using namespace std;
int mp[10]={6,2,5,5,4,5,6,3,7,6};
//unordered_map<int,int> mp={{0,6},{1,2},{2,5},{3,5},{4,4},{5,5},{6,6},{7,3},{8,7},{9,6}};
int sitck(int x){
    if(x<10) return mp[x];
    if(x<100) return mp[x%10]+mp[x/10];
    if(x<1000) return mp[x%10]+mp[x/10%10]+mp[x/100];
    else return mp[x%10]+mp[x/10%10]+mp[x/100%10]+mp[x/1000];
}
int main(){
    int n;int ans=0;
    scanf("%d",&n);
    n-=4;//加号和等号
    // for(int i=0;i<10;i++){
    //     for(int j=i+1;j<10;j++){
    //         int k=i+j;
    //         if(k<10){
    //             if(mp[i]+mp[j]+mp[k]==n){
    //                 //cout<<i<<j<<endl;
    //                 ans+=2;
    //             }
    //         }
    //         else{
    //             if(mp[i]+mp[j]+mp[k%10]+mp[k/10]==n){
    //                 //cout<<i<<j<<k<<endl;
    //                 ans+=2;
    //             }
    //         }
    //     }
    // }
    // for(int i=10;i<100;i++){
    //     for(int j=0;j<10;j++){
    //         int k=i+j;
    //         if(mp[i%10]+mp[i/10]+mp[j]+mp[k%10]+mp[k/10]==n){
    //             //cout<<i<<j<<endl;
    //             ans+=2;
    // }}}
    // for(int i=10;i<100;i++){
    //     for(int j=i+1;j<100;j++){
    //         int k=i+j;
    //         if(mp[i%10]+mp[i/10]+mp[j%10]+mp[j/10]+mp[k%10]+mp[k/10]==n&&k<100){
    //             //cout<<i<<j<<endl;
    //             ans+=2;
    //         }
    //     }
    // }
    // for(int i=0;i<100;i++){
    //     int k=i+i;
    //     if(k<10){
    //         if(mp[i]+mp[k]+mp[i]==n){
    //             //cout<<i<<endl;
    //             ans++;
    //         }
    //     }
    //     else{
    //         if(i<10){
    //             if(mp[i]+mp[i]+mp[k%10]+mp[k/10]==n){
    //                 //cout<<i<<k<<endl;
    //                 ans++;
    //             }
    //         }
    //         else{
    //             if(mp[i%10]*2+mp[i/10]*2+mp[k%10]+mp[k/10]==n){
    //                 //cout<<i<<k<<endl;
    //                 ans++;}
    //         }
    //     }
    // }
    for(int i=0;i<1000;i++){
        for(int j=i;j<1000;j++){
            int k=i+j;
            if(sitck(i)+sitck(j)+sitck(k)==n&&i!=j){
                ans+=2;
            }
            if(i==j&&sitck(i)*2+sitck(k)==n){
                ans++;
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}