#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int q;
    cin>>q;
    char c;
    int l,r;
    multiset<int> lefts,rights;
    while(q--){
        cin>>c>>l>>r;
        if(c=='+'){
            lefts.insert(l);
            rights.insert(r);
        }
        if(c=='-'){
            lefts.erase(lefts.find(l));
            rights.erase(rights.find(r));
        }
        if((int)lefts.size()<2){
            cout<<"NO"<<endl;
        }
        else{
            int max_left=*prev(lefts.end());
            int min_right=*rights.begin();
            cout<<(min_right<max_left?"YES":"NO")<<endl;
        }
    }
    return 0;
}