#include<bits/stdc++.h>
using namespace std;
long long num[5005];
//bool flag[100005][100005][100005];
int main(){
    /*使用数学方法，用num[i]记录长度为i的木棒个数，其中选出2个为cnumi2，
    剩下筛选两个元素相加等于i，这一步用暴力枚举*/
    int n;
    cin>>n;
    long long a[n];
    long long ans=0;
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
        num[a[i]]++;
    }
    for(int i=1;i<=5000;i++){
        if(num[i]>=2){
            int c;//cnumi2,numi中选2个的方法数
            c=(num[i]*(num[i]-1)/2)%1000000007;
            //剩下两根木棍之和为i，必定在i之前，用暴力枚举
            for(int j=1;j<=i/2;j++){
                if(num[j]>=1&&num[i-j]>=1&&j!=i-j){
                    ans+=(c*num[j]*num[i-j])%1000000007;
                }
                if(num[j]>=2&&j==i-j){
                    ans+=(c*num[j]*(num[i-j]-1)/2)%1000000007;
                }
            }
        }
    }
    // sort(a,a+n);
    // //mask数组用于选择4个元素
    // vector<bool> mask;
    // for(int i=0;i<n-4;i++){
    //     mask.push_back(0);
    // }
    // for(int i=0;i<4;i++){
    //     mask.push_back(1);
    // }
    // int s[4];
    // do{
    //     int j=0;
    //     for(int i=0;i<n;i++){
    //         if(mask[i]){
    //             s[j]=a[i];
    //             j++;
    //         }
    //     }
    //     if(s[0]+s[1]==s[2]&&s[2]==s[3]){
    //         ans++;
    //     }
    // }while(next_permutation(mask.begin(),mask.end()));
    ans%=1000000007;
    printf("%lld",ans);
    return 0;
}