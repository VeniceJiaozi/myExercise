#include<bits/stdc++.h>
using namespace std;
struct node{
    string name;
    int chi;
    int math;
    int eng;
    int sum;
};
struct Pair{
    string name1,name2;
};
node l[1005];//bool pd[1005][1005];
vector<Pair> ans;
bool cmp(Pair a,Pair b){
    if(a.name1==b.name1){
        return a.name2<b.name2;
    }
    return a.name1<b.name1;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>l[i].name>>l[i].chi>>l[i].math>>l[i].eng;
        l[i].sum=l[i].chi+l[i].math+l[i].eng;
        for(int j=0;j<i;j++){
            if(abs(l[i].sum-l[j].sum)<=10&&abs(l[i].chi-l[j].chi)<=5&&abs(l[i].math-l[j].math)<=5&&abs(l[i].eng-l[j].eng)<=5){
                //pd[i][j]=1;
                //cout<<l[j].name<<" "<<l[i].name<<endl;
                ans.push_back({l[j].name,l[i].name});
            }
        }
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(pd[i][j]){
    //             cout<<l[i].name<<" "<<l[j].name<<endl;
    //         }
    //     }
    // }
    sort(ans.begin(),ans.end(),cmp);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i].name1<<" "<<ans[i].name2<<endl;
    }
    return 0;
}