#include<bits/stdc++.h>
using namespace std;
int N;
void print(int n){
    if(n==4){
        cout<<"oooo****--";
        for(int i=0;i<NSIG-4;i++)
            cout<<"o*";
        cout<<endl;

        cout<<"ooo--***o*";
        for(int i=0;i<N-4;i++)
            cout<<"o*";
        cout<<endl;

        cout<<"ooo*o**--*";
        for(int i=0;i<N-4;i++)
            cout<<"o*";
        cout<<endl;

        cout<<"o--*o**oo*";
        for(int i=0;i<N-4;i++)
            cout<<"o*";
        cout<<endl;

        cout<<"o*o*o*--o*";
        for(int i=0;i<N-4;i++)
            cout<<"o*";
        cout<<endl;

        cout<<"--o*o*o*o*";
        for(int i=0;i<N-4;i++)
            cout<<"o*";
        cout<<endl;
        return;
    }
    else{
        for(int i=0;i<n;i++)
            cout<<"o";
        for(int i=0;i<n;i++)
            cout<<"*";
        cout<<"--";
        for(int i=0;i<N-n;i++)
            cout<<"o*";
        cout<<endl;

        for(int i=0;i<n-1;i++)
            cout<<"o";
        cout<<"--";
        for(int i=0;i<n-1;i++)
            cout<<"*";
        for(int i=0;i<N-n+1;i++)
            cout<<"o*";
        cout<<endl;
        print(n-1);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>>N;
    print(N);
    return 0;
}