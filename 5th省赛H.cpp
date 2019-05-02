#include<bits/stdc++.h>
using namespace std;
#define maxn 1000000007
int dp[150][150];
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		int i,j,t1,t2,t3,f1,f2,K,m,n,miN,sum;
		cin>>n>>m; 
		for(i=0;i<=n+1;i++)
			for (j=0;j<=m+1;j++)
				dp[i][j] = maxn;
		dp[0][m] = 0;
		for(i=1;i<=n;i++)
		{
			cin>>t1>>t2>>t3>>f1>>f2;
			for(j = m;j>=0;j--)
			{
				dp[i][j] = min(dp[i][j],dp[i-1][j] +t2);
				if(j>=f1)
					dp[i][j-f1] = min(dp[i][j-f1],dp[i-1][j]+t1);
				sum=j+f2;
				if(sum>m)
					sum = m;
				dp[i][sum] = min(dp[i][sum],dp[i-1][j]+t3);
			}
		}
		miN = maxn;
		for(int i=0;i<=m;i++)
		{
			if(dp[n][i]<miN)
				miN = dp[n][i];
		}
		cout<<miN<<endl;

	}
} 
