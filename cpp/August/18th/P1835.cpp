#include<bits/stdc++.h>
using namespace std;
vector<int>primes;
const int MAXN=1e6+1;
const int SMALL_PRIMES=5e4;
int small_primes[MAXN],prime_cnt;
bool is_comp_small[SMALL_PRIMES+1];
bool is_comp[MAXN+1];//区间筛
void sieve_small_primes(){
    for(int i=2;i<=SMALL_PRIMES;i++){
        //for(int i=2;i<=SMALL_PRIMES;i++){
            if(!is_comp_small[i]){
                small_primes[++prime_cnt]=i;
            }
            for(int j=1;j<=prime_cnt&&(long long)i*small_primes[j]<=
                SMALL_PRIMES;j++){
                is_comp_small[i*small_primes[j]]=true;
                if(i%small_primes[j]==0)break;
            }
        //}
    }
    
}
// void sieve(int n,bool isprime[]){
//     isprime[0]=isprime[1]=false;
//     for(int i=2;i<n;i++){
//         if(isprime[i]){
//             primes.push_back(i);
//         }
//         for(int p:primes){
//             if(p*i>=n)break;
//             isprime[p*i]=false;
//             if(i%p==0)break;
//         }
//     }
// }
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long l,r;
    cin>>l>>r;
    if(l<2)l=2;
    sieve_small_primes();
    for(int i=1;i<=prime_cnt;i++){
        long long p=small_primes[i];
        if(p*p>r)break;
        long long first=(l+p-1)/p*p;
        long long start=max(first,p*p);
        for(long long j=start;j<=r;j+=p){
            is_comp[j-l]=true;
        }
    }
    long long ans=0;
    for(long long i=l;i<=r;i++){
        if(!is_comp[i-l])ans++;
    }
    cout<<ans<<endl;
    return 0;
}