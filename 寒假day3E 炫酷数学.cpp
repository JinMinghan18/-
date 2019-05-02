#include <bits/stdc++.h>
#define maxn 998244353
#define ll long long 
using namespace std;
int main()
{
	int M;
	cin>>M;
	ll ans = 1;
	for(int i=0;i<M;i++)
		ans *= 3,ans%=maxn; 
	cout<<ans;
} 
