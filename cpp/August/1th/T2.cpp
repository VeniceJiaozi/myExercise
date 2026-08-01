#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int n,dis[N],ans;
bool b[N];
int main(){
    scanf("%d",&n);
    for(int i=0;i<n-1;i++){
        scanf("%d",&dis[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(int i=1;i<n-1;i++){
        if(b[i]){
            int start=i;
            while(b[i]){
                i++;
            }
            int end=i-1;
            //第start到end之间的人都有强迫症
            if(dis[start-1]!=dis[end]){
                ans+=end-start+1;
            }
            //ans+=end-start+1;
        }
    }
    printf("%d\n",ans);
    return 0;
}