#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r;
    cin>>n>>r;
    vector<int> mask;
    for(int i=0;i<r;i++){
        mask.push_back(1);
    }
    for(int i=0;i<n-r;i++){
        mask.push_back(0);
    }
    
    do{
        for(int i=0;i<n;i++){
            if(mask[i]){
                cout<<setw(3)<<i+1;
            }
        }
        cout<<endl;
    }while(prev_permutation(mask.begin(),mask.end()));
    return 0;
}