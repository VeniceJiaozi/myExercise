#include<bits/stdc++.h>
using namespace std;
int T;
int main()
{
	cin>>T;
	while(T--)
	{
		int x,y,u=0,d=0,l=0,r=0,p[5],op=0;
		string s;
		cin>>x>>y>>s;swap(x,y);
		int len=s.size();
		for(int i=0;i<len;i++)
		{
			if(s[i]=='U')
				u++;
			if(s[i]=='D')
				d++;
			if(s[i]=='L')
				l++;
			if(s[i]=='R')
				r++;
		}
		for(int i=1;i<=4;i++)
			p[i]=i;
		do
		{
			int dx=0,dy=0,flag=1;
			for(int i=1;i<=4;i++)
			{
				if(p[i]==3&&dx==x&&y>=dy-l&&y<=dy)
				{
					flag=0;
					break;
				}
				else if(p[i]==4&&dx==x&&y<=dy+r&&y>=dy) 
				{
					flag=0;
					break;
				} 
				else if(p[i]==1&&dy==y&&x>=dx&&x<=dx+u)
				{
					flag=0;
					break;
				} 
				else if(p[i]==2&&dy==y&&x>=dx-d&&x<=dx)
				{
					flag=0;
					break;
				}
					if(p[i]==1)
						dx+=u;
					if(p[i]==2)
						dx-=d;
					if(p[i]==3)
						dy-=l; 
					if(p[i]==4)
						dy+=r;
			}
			if(flag)
			{
				for(int i=1;i<=4;i++)
				{
					if(p[i]==1)
						for(int j=1;j<=u;j++)
							cout<<"U";
					if(p[i]==2)
						for(int j=1;j<=d;j++)
							cout<<"D";
					if(p[i]==3)
						for(int j=1;j<=l;j++)
							cout<<"L";
					if(p[i]==4)
						for(int j=1;j<=r;j++)
							cout<<"R";
				}
				cout<<endl;
				op=1;
				break;
			}
		}while(next_permutation(p+1,p+5));
		if(!op)
			cout<<"Impossible"<<endl;
	}
	return 0;
}
