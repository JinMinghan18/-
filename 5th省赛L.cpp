#include <bits/stdc++.h>
using namespace std;
#define ll long long 
double a[300][300];
double f(double x1,double y1,double z1,double x2,double y2,double z2)
{
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)+(z1-z2)*(z1-z2)); 
} 
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		memset(a,0,sizeof(a));
		cin>>n;
		for(int i=0 ;i<n;i++)
		{
			double x,y,z,I;
			cin>>x>>y>>z>>I;
			for(int j=0;j<=206;j++)
				for(int k=0;k<=206;k++)
				{
					double l = f(x,y,z,j-103,k-103,0);
					a[j][k] += (I/(l*l))*z/l;
				}
		}
		double ans = 0;
		for(int i=0;i<=206;i++)
			for(int j=0 ;j<=206;j++)
				ans = max(a[i][j],ans);
		cout<<fixed<<setprecision(2)<<ans<<endl;
		
	} 
} 
