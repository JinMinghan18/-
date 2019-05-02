#include <bits/stdc++.h>
using namespace std;
int a[20],b[10];
int we(int x,int y,int m)
{
	memset(b,0,sizeof(b));
	b[0] = x;
	b[1] = y;
	b[2] = m;
	sort(b,b+3);
	memset(a,0,sizeof(a));
	a[0] = b[0];
	a[1] = b[1];
	a[2] = b[2];
	a[3] = b[0] + b[1];
	a[4] = b[0] + b[2];
	a[5] = b[1] + b[2];
	a[6] = b[1] + b[2] + b[0];
	a[7] = b[2] - b[1];
	a[8] = b[2] - b[0];
	a[9] = b[1] - b[0];
	if(b[2] - b[1] - b[0]>=0)
		a[10] = b[2] - b[1] - b[0];
	else 
		a[10] = 0;
	a[11] = b[2] - b[1] + b[0];
	a[12] = b[2] + b[1] - b[0];
	sort(a,a+13);
	int p = 1;
	for(int i=0;i<12;i++)
	{
		if(a[i]!= a[i+1] && a[i] != 0)
		{
			p++;
		} 
	}
	return p;
 }
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,m,maxn = 0;
		cin>>n>>m;
		for(int i=1;i<=n/2;i++)
		{
			maxn = max(maxn,we(i,n-i,m));
		}
		for(int i=1;i<=m/2;i++)
		{
			maxn = max(maxn,we(i,m-i,n));
		}
		cout<<maxn<<endl;
		
	}
	
}
