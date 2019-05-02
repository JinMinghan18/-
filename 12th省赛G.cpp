#include <bits/stdc++.h>
using namespace std;
struct dishs
{
	string a;
	int b;
}m1[110],m2[110],m3[110]; 
bool cmp(dishs a,dishs b)
{
	return a.b<b.b;
}
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		int x,y,z,sum = 0;
		cin>>x>>y>>z;
		for(int i=1;i<=x;i++)	cin>>m1[i].a>>m1[i].b;
		for(int i=1;i<=y;i++)	cin>>m2[i].a>>m2[i].b;
		for(int i=1;i<=z;i++)	cin>>m3[i].a>>m3[i].b;
		sort(m1+1,m1+x+1,cmp);
		sort(m2+1,m2+y+1,cmp);
		sort(m3+1,m3+z+1,cmp);
		sum=m1[x/2+1].b+m2[y/2+1].b+m3[z/2+1].b;
		cout<<sum<<' '<<m1[x/2+1].a<<' '<<m2[y/2+1].a<<' '<<m3[z/2+1].a<<endl;
	}
} 
