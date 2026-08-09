#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
    return a.second<b.second;
}
int main(){
    int n;
    scanf("%d",&n);
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        a[i].first=i+1;
        scanf("%d",&a[i].second);
    }
    sort(a.begin(),a.end(),cmp);
    int q;
    scanf("%d",&q);
    int m;
    while(q--){
        bool flag=false;
        scanf("%d",&m);
        //查询
        int l=0,r=n-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(a[mid].second==m){
                printf("%d\n",a[mid].first);
                flag=true;
                break;
            }
            if(a[mid].second>=m){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        if(!flag)printf("0\n");
    }
    return 0;
}