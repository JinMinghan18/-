#include <iostream>
#include <stdio.h>
#include <algorithm>
#define maxn 1010
#define INF 0x3f3f3f3f
using namespace std;
int mmp[maxn][maxn];
int dis1[maxn],dis2[maxn];
bool vis[maxn];
int N,M,X;
void dijkstra(int s,int dis[])
{
	for(int i=0;i<=N;i++)
	{
		vis[i] = false;
		dis[i] = INF;
	}
	dis[s] = 0;
	while(true)
	{
		int v=-1;
		for(int u=1;u<=N;u++)
		{
			if(!vis[u] && (v<0||dis[v]>dis[u]))
				v=u;
		}
		if(v==-1)
			break;
		vis[v] = true;
		for(int j=1;j<=N;j++)
		{
			dis[j] = min(dis[j],dis[v]+mmp[v][j]);
		}
	}
}
int main()
{
	int a,b,c;
	while(scanf("%d%d%d",&N,&M,&X)!=EOF)
	{
		for(int i=1;i<=N;i++)
			for(int j=1;j<=N;j++)
			{
				if(i == j)
					mmp[i][j] = 0;
				else mmp[i][j] = INF;
			}
		for(int i=0;i<M;i++)
		{
			scanf("%d%d%d",&a,&b,&c);
			mmp[a][b] = c;
		}
		dijkstra(X,dis1);
		for(int i=1;i<=N;i++)
		{
			for(int j=1;j<i;j++)
			{
				int temp = mmp[i][j];
				mmp[i][j] = mmp[j][i];
				mmp[j][i] = temp;
			}
		}
		dijkstra(X,dis2);
		int max=-100000;
		for(int i=1;i<=N;i++)
		{
			if(i!=X)
			{
				int temp = dis1[i] + dis2[i];
				if(max<temp)
				max = temp;
			}
		} 
		printf("%d\n",max);
	}	
}
