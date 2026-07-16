#include<bits/stdc++.h>
using namespace std;
int n,maxn,maxn_index;
struct student{
    string name;
    int chi;
    int math;
    int eng;
    int sum;
};
student students[1005];
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>students[i].name>>students[i].chi>>students[i].math>>students[i].eng;
        students[i].sum=students[i].chi+students[i].math+students[i].eng;
        if(students[i].sum>maxn){
            maxn=students[i].sum;
            maxn_index=i;
        }
    }
    cout<<students[maxn_index].name<<" "<<students[maxn_index].chi<<" "<<students[maxn_index].math<<" "<<students[maxn_index].eng;
    return 0;
}