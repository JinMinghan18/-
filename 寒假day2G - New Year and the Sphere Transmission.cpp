#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,ys[1000000],num;
int main()
{
	cin>>n;
	for(int i=int (sqrt(n));i>0;i--)
	{
		if(!(n%i))
		{
			ys[++num] = i;
			ys[++num] = n/i;
		}
	} 
	sort(ys+1,ys+num+1);
	for(int i =num;i>0;i--)
	{
		if(ys[i]==ys[i+1]) continue;
		ll ans = 0;
		ans = (1+(n+1-ys[i]))*(n/ys[i])/2;
		cout<<ans<<" ";
	}
}
