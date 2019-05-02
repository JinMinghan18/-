#include <iostream>
#include <algorithm>
#include <cmath> 
#include <stdio.h>
#define maxn 300
#define INF 0x3f3f3f3f

using namespace std;
double mmp[maxn][maxn];
double dis[maxn];
bool vis[maxn];
int n; 
struct node
{
	double x,y;
}m[300];
int main()
{
	int t = 1;
	while(scanf("%d",&n)!=EOF && n)
	{
		for(int i=1;i<=n;i++)
		{
			scanf("%lf%lf",&m[i].x,&m[i].y);
		}
		for(int i =1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				mmp[i][j] = mmp[j][i] = sqrt((m[i].x - m[j].x)*(m[i].x - m[j].x)+(m[i].y - m[j].y)*(m[i].y - m[j].y));		
			}
		}
		for(int k =1;k<=n;k++)
			for(int i=1;i<=n;i++)
				for(int j=1;j<=n;j++)
					if(k!=i&&i!=j&&j!=k)
						mmp[i][j] = min(mmp[i][j],max(mmp[i][k],mmp[k][j]));
					
		printf("Scenario #%d\nFrog Distance = %.3lf\n\n",t++,mmp[1][2]);
	}
}
