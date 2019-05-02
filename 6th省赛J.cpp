#include <bits/stdc++.h>
using namespace std;
int dp[300][300];
struct node 
{
	int a,b;
}tree[300];
bool cmp(node x,node y)
{
	return x.b<y.b;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,m;
		cin>>n>>m;
		for(int i=1;i<=n;i++) cin>>tree[i].a;
		for(int i=1;i<=n;i++) cin>>tree[i].b;
		sort(tree+1,tree+n+1,cmp);
		for(int i = 1;i<=n;i++)
			for(int j = 1;j<=min(i,m);j++)
			{
				dp[i][j] = max(dp[i-1][j],dp[i-1][j-1]+tree[i].a+tree[i].b*(j-1));
			}
		cout<<dp[n][m]<<endl;	
	}
}
