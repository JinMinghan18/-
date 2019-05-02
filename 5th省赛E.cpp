#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int a[2000];
		int n;
		cin>>n;
		for(int i=0;i<=n;i++)	cin>>a[i];
		if(n == 0) cout<<0<<endl;
		else if(n>0)
		{
			for(int i=0;i<n-1;i++)
			cout<<a[i]*(n-i)<<' ';
			cout<<a[n-1]<<endl;
		}
	}
} 
