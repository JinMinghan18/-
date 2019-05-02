#include <iostream>
using namespace std;
int dp[1010] ,a[1010];
int main()
{
	int N,i,j;
	cin>>N;
	for(int i = 0 ;i<N ;i++) cin>>a[i];
	dp[0] = 1;
	for(i = 1 ; i < N;i++)
	{
		int temp = 0;
		for(j=0;j<i;j++)
			if(a[i]>a[j])
				if(temp<dp[j])
					temp = dp[j];
		dp[i] = temp +1;
	}
	int maxl = 0;
	for(i=0;i<N;i++)
		if(maxl<dp[i]) maxl = dp[i];
	cout<<maxl;
	return 0;
}
