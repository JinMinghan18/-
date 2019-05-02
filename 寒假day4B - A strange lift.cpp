#include<cstring>
#include <algorithm>
#include <stdio.h>
#define INF 0x3f3f3f3f
using namespace std;
int mmp[300][300];
int vis[300];
int dis[300]; 
int n,A,B;
void dijkstra(int s)
{
	for(int i=0;i<=n;i++)
	{
		vis[i] = false;
		dis[i] = INF;
	}
	dis[s] = 0;
	while(true)
	{
		int v=-1;
		for(int u=1;u<=n;u++)
		{
			if(!vis[u] && (v<0||dis[v]>dis[u]))
				v=u;
		}
		if(v==-1)
			break;
		vis[v] = true;
		for(int j=1;j<=n;j++)
		{
			dis[j] = min(dis[j],dis[v]+mmp[v][j]);
		}
	}
}
int main()
{
	while(scanf("%d",&n)!=EOF &&n)
	{
		scanf("%d%d",&A,&B); 
		memset(mmp,0,sizeof(mmp));
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
			{
				if(i == j)
					mmp[i][j] = 0;
				else mmp[i][j] = INF;
			}
		for(int i =1;i<=n;i++)
		{
			int k;
			scanf("%d",&k);
			if(i+k<=n) mmp[i][i+k]  = 1;
			if(i-k>0) mmp[i][i-k] = 1;
		}
		dijkstra(A);
		if(dis[B] == INF) printf("-1\n");
		else printf("%d\n",dis[B]);	
	}
} 
