#include<bits/stdc++.h>
using namespace std;
long long ans;int sum;
// void digui(vector<int> myset){
//     ans+=accumulate(myset.begin(),myset.end(),0LL);
//     if(myset.size()==1){
//         return;
//     }
//     else{
//         for(int i=0;i<myset.size();i++){
//             vector<int> tmp=myset;
//             tmp.erase(tmp.begin()+i);
//             digui(tmp);
//         }
//     }
// }
int main(){
    vector<int> myset;int a;
    while(cin>>a){
        //if(find(myset.begin(),myset.end(),a)==myset.end){
            myset.push_back(a);sum++;ans+=a;
        //}
    }
    //digui(myset);
    ans*=pow(2,sum-1);
    cout<<ans<<endl;
    return 0;
}