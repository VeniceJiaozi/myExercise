#include<bits/stdc++.h>
using namespace std;
vector<int> prime;
const int MAXN=1e8+5;
bool is_prime[MAXN];
void sieve(int n){
    for(int i=2;i<n;i++){
        is_prime[i]=true;
    }
    for(int i=2;i<n;i++){
        if(is_prime[i]){
            prime.push_back(i);
        }
        for(int p:prime){
            if(i*p>n){
                break;
            }
            is_prime[i*p]=false;
            if(i%p==0){
                break;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    sieve(n);
    while(q--){
        int k;
        cin>>k;
        cout<<prime[k-1]<<"\n";
    }
    return 0;
}