#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll so[200010],att[200010],sum[200010] ,d; 
int main()
{
	int n,q;
	cin>>n>>q;
	for(int i = 1;i<=n;i++)
	{
		cin>>so[i];
		sum[i] = sum[i-1] + so[i];
	}
	for(int i=1;i<=q;i++)
	{
		cin>>att[i];
	}
	for(int i = 1;i<=q;i++ )
	{
		d+=att[i];
		if(d>=sum[n]) d = 0,cout<<n<<endl;
		else cout<<n-int(upper_bound(sum+1,sum+1+n,d) -sum -1)<<endl;
	}
	return 0;
}
