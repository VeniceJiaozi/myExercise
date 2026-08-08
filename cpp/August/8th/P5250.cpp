#include<bits/stdc++.h>
using namespace std;
set<int> s;
void init(int n){
    if(s.count(n)){
        printf("Already Exist\n");
    }
    else{
        s.insert(n);
    }
    return;
}
void search(int n){
    if(s.empty()){
        printf("Empty\n");
        return;
    }
    if(s.count(n)){
        printf("%d\n",n);
        s.erase(s.find(n));
        return;
    }
    int ans;
    set<int>::iterator it=s.lower_bound(n);
    if(it==s.begin()){
        ans=*it;
    }
    else if(it==s.end()){
        ans=*prev(it);
    }
    else{
        int a=*it,b=*prev(it);
        ans=(n-b<=a-n)?b:a;
    }
    printf("%d\n",ans);
    s.erase(s.find(ans));
    return;
}
int main()
{
    int m;
    scanf("%d",&m);
    while(m--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        if(a==1)init(b);
        if(a==2)search(b);
    }
    return 0;
}