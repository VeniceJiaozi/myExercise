#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    map<string,int> mp;
    while(n--){
        int op;
        string name;
        scanf("%d",&op);
        if(op==1){
            cin>>name;
            int score;
            scanf("%d",&score);
            mp[name]=score;
            printf("OK\n");
        }
        else if(op==2){
            cin>>name;
            if(mp.find(name)==mp.end()){
                printf("Not found\n");
            }
            else{
                printf("%d\n",mp[name]);
            }
        }
        else if(op==3){
            cin>>name;
            if(mp.find(name)==mp.end()){
                printf("Not found\n");
            }
            else{
                mp.erase(name);
                printf("Deleted successfully\n");
            }
        }
        else if(op==4){
            printf("%d\n",mp.size());
        }
    }
    return 0;
}