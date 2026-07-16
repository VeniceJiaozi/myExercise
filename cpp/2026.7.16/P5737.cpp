#include<bits/stdc++.h>
using namespace std;
int i,j,ans,l[10001];
bool isrun(int x){
    if(x%400==0){
        return 1;
    }
    if(x%100!=0&&x%4==0){
        return 1;
    }
    return 0;
}
int main(){
    int x,y;
    cin>>x>>y;
    for(i=x;i<=y;i++){
        if(isrun(i)){
            l[ans]=i;
            ans++;
        }
    }
    cout<<ans<<endl;
    for(i=0;i<ans;i++){
        cout<<l[i]<<" ";
    }
    return 0;
}