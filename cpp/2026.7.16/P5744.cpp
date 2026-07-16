#include<bits/stdc++.h>
using namespace std;
struct node{
    string name;
    int age,score;
};
int main()
{
    int n;
    cin>>n;
    vector<node> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].name>>v[i].age>>v[i].score;
        v[i].age++;
        v[i].score*=1.2;
        if(v[i].score>=600)v[i].score=600;
        cout<<v[i].name<<" "<<v[i].age<<" "<<v[i].score<<endl;
    }
    return 0;
}