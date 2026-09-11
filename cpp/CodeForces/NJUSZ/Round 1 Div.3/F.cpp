#include<bits/stdc++.h>
using namespace std;
struct Person{
    int a,b;
};
bool cmp(Person p1,Person p2){
    return p1.a<p2.a;
}
long long mergeCount(vector<int>& b,int l,int r){
    if(r-l<=1) return 0;
    int mid=(l+r)/2;
    long long cnt=mergeCount(b,l,mid)+mergeCount(b,mid,r);
    vector<int> tmp(r-l);
    int i=l,j=mid,k=0;
    while(i<mid&&j<r){
        if(b[i]<=b[j]){
            tmp[k++]=b[i++];
        }else{
            cnt+=mid-i;
            tmp[k++]=b[j++];
        }
    }
    while(i<mid) tmp[k++]=b[i++];
    while(j<r) tmp[k++]=b[j++];
    copy(tmp.begin(),tmp.end(),b.begin()+l);
    return cnt;
}
void solve(){
    int n;
    cin>>n;
    vector<Person> people(n);
    for(int i=0;i<n;i++){
        cin>>people[i].a>>people[i].b;
    }
    sort(people.begin(),people.end(),cmp);
    long long ans=0;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(people[i].b>people[j].b){
    //             ans++;
    //         }
    //     }
    // }
    vector<int> b(n);
    for(int i=0;i<n;i++){
        b[i]=people[i].b;
    }
    ans=mergeCount(b,0,n);
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}