#include <iostream>
#include <stdio.h>
#include <algorithm>
#define ll long long 
using namespace std;
int main()
{
	int N,a[20],order = 0;
	while(scanf("%d",&N) != EOF)
	{
		order ++;
		for(int i=0;i<N;i++)
		{
			cin>>a[i];
		}
		ll maxn = a[0],ans = 1;
		for(int i=0;i<N;i++)
		{
			for(int j=i;j<N;j++)
			{
				ans = 1;
				for(int k=i;k<=j;k++)
				{
					ans *= a[k];
					
				}
				maxn = max(maxn,ans);
			}
		}
		if(maxn <0) printf("Case #%d: The maximum product is %lld.\n",order,0); 
		else printf("Case #%d: The maximum product is %lld.\n",order,maxn);
		cout<<endl;
	}
	return 0;
}
