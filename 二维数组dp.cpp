#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int a[405][405];
int dp[405][405];
int main()
{
	    int n;
	    while(cin>>n)
	    {
	        for(int i=0; i<n; i++)
	        {
	             for(int j=0;j<=i;j++)
	             {
	                cin>>a[i][j];
	             }
	        }
	        for(int i=n-1;i>=0;i--)
	        {
	            dp[n-1][i]=a[n-1][i];
	        }
	        for(int i=n-2;i>=0;i--)
	        {
	            for(int j=0;j<=i;j++)
	            dp[i][j]=a[i][j]+max(dp[i+1][j],dp[i+1][j+1]);
	        }
				cout<<dp[0][0]<<endl;
	    }
    return 0;
}

