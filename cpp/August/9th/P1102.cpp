#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c;
    scanf("%d%d",&n,&c);
    unordered_map<long long,long long>mp;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        mp[arr[i]]++;
    }
    long long ans=0;
    for(int i=0;i<n;i++){
        unordered_map<long long,long long>::iterator it=mp.find(arr[i]+c);
        if(it!=mp.end()){
            ans+=it->second;
        }
    }
    printf("%lld\n",ans);
    return 0;
}