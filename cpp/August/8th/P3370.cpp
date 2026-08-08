#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
const ull BASE=131;
ull getHash(const string &s){
    ull val=0;
    for(char c:s){
        val=val*BASE+(ull)c;
    }
    return val;
}
int main(){
    int n;
    scanf("%d",&n);
    set<ull> hashes;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        hashes.insert(getHash(s));
    }
    printf("%d\n",hashes.size());
    return 0;
}