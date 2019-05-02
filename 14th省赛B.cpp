#include <bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
	return a>b;
}
int main()
{
	int N;
	scanf("%d",&N);
	while(N--)
	{
		bool flag = true;
		int n,a[1020];
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		sort(a,a+n,cmp);
		if(n<10 || n>13) flag = false;
		for(int i=1;i<n-1;i++)
		{
			if(a[i]-a[i+1] > 2) {flag = false;break;}
		}
		if(a[n-1]!=1 || a[n-2] != 1) flag = false;
		if(!flag) printf("No\n");
			else printf("Yes\n");
	}
}

