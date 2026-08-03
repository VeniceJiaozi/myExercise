#include<bits/stdc++.h>
using namespace std;
const int MAXN=1e5+5;
int q,n;
int pushed[MAXN],poped[MAXN];
int main()
{
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&pushed[i]);
        }
        for(int i=0;i<n;i++){
            scanf("%d",&poped[i]);
        }
        stack<int> st;
        int j=0; //poped的指针
        for(int i=0;i<n;i++){
            st.push(pushed[i]);
            while(!st.empty()&&st.top()==poped[j]){
                st.pop();
                j++;
            }
        }
        if(st.empty()) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}