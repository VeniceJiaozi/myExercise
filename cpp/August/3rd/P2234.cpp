#include<bits/stdc++.h>
using namespace std;
int n;
const int MAXN=4e4,INF=0x3f3f3f3f;
int x;
long long ans;
int main()
{
    scanf("%d",&n);
    set<int> s;
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        int minn=INF;
        if(i==0){
            s.insert(x);
            ans+=x;
            continue;
        }
        else{
            set<int>::iterator it=s.lower_bound(x);
            if(it!=s.end()){
                minn=min(minn,*it-x);
            }
            if(it!=s.begin()){
                it--;
                minn=min(minn,x-*it);
            }
            ans+=minn;
            s.insert(x);
        }
    }
    printf("%lld\n",ans);
    return 0;
}