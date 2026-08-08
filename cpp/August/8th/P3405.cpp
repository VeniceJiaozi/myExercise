#include<bits/stdc++.h>
using namespace std;
int cnt[676*676];
int main(){
    int n;
    scanf("%d",&n);
    long long ans=0;
    char s1[10],s2[10];
    for(int i=0;i<n;i++){
        scanf("%s%s",s1,s2);
        int a=(s1[0]-'A')*26+(s1[1]-'A');
        int b=(s2[0]-'A')*26+(s2[1]-'A');
        if(a==b)
            continue;
        int rev=b*676+a;
        ans+=cnt[rev];
        int cur=a*676+b;
        cnt[cur]++;
    }
    printf("%lld\n",ans);
    return 0;
}