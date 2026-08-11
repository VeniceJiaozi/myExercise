#include<bits/stdc++.h>
using namespace std;
int t,n;
const int MAXN=5e4+5;
int a[MAXN];
int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        set<int> s;
        for(int i=0;i<n;i++){
            if(s.find(a[i])==s.end()){
                s.insert(a[i]);
                printf("%d ",a[i]);
            }
                
        }
    }
    return 0;
}