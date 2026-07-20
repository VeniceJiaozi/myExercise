#include<bits/stdc++.h>
using namespace std;bool ans[10000001];
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //sort(a,a+n);
    for(int i=0;i<n-1;i++){
        ans[abs(a[i]-a[i+1])]=1;
    }
    for(int i=1;i<n;i++){
        if(!ans[i]){
            printf("Not Jolly");
            return 0;
        }
    }
    printf("Jolly");
    return 0;
}