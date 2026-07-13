#include<bits/stdc++.h>
using namespace std;
const int N=105;
int p,v,L[N],R[N],t;
bool check(int l,int r){
	printf("check %d %d\n",l,r);fflush(stdout);
	string s;cin>>s;
	return (s=="Yes");
}
signed main(){
	scanf("%d%d",&p,&v);
	int l=0,r=p,left_v=0,right_v=v;
	while(l<r){
		int mid=l+r>>1;
		if(check(l,mid)) r=mid;
		else l=mid+1;
		for(int i=1;i<=t;i++){
			left_v=max(left_v,(l-R[i-1])/(t-i+1));
			right_v=min(right_v,(r-L[i-1])/(t-i+1));
		}
        L[t]=l,R[t]=r;
		l+=left_v,r+=right_v,t++;
	}
	printf("answer %d",l);fflush(stdout);
	return 0;
}

