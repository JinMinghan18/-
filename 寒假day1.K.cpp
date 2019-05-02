#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int func(ll a,ll b,ll p)
{
	ll res =1;
	while(b)
	{
		if(b&1) res = res*a%p;
		a=a*a%p;
		b>>=1;
	}
	return res;
}
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		ll M,n,a,b,ans = 0,temp = 1;
		cin>>M;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a>>b;
			ans = ans +func(a,b,M);
		}
		ans %=M;
		cout<<ans<<endl;
	}
	return 0;
}
