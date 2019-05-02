#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		int M,n;
		cin>>M>>n;
		int a[421],dp[210],maxn;
		memset(dp,0,sizeof(dp));
		for(int i=0;i<M;i++)	cin>>a[i];
		for(int i=M;i<2*M;i++)	a[i] = a[i-M];
		for(int i=0;i<M;i++)
			for(int j=i;j<i+n;j++)
				dp[i] +=a[j];
		maxn = dp[0];
		for(int i=0;i<M;i++)
		if(dp[i]>maxn)	maxn = dp[i];
		cout<<maxn<<endl;	
	}
}
