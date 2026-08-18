#include<bits/stdc++.h>
using namespace std;
int n,k;
unordered_set<int> x,y;
int main(){
    scanf("%d%d",&n,&k);
    for(int i=0;i<k;i++){
        int r,c;
        scanf("%d%d",&r,&c);
        x.insert(r);
        y.insert(c);
    }
    int lenx=x.size(),leny=y.size();
    long long ans=(long long)((long long)lenx*n+(long long)leny*n
    -(long long)lenx*leny);
    printf("%lld\n",ans);
    return 0;
}