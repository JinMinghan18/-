#include<bits/stdc++.h>
const int maxN=510;
const int INF=1000000007;
using namespace std;
int visited[maxN],mapp[maxN][maxN],dis[maxN];
int main()
{
	int N,E,i,j,a,b,c,sum=0,min,t;
	while (cin>>N &&N)
	{
		sum = 0; 
		memset(visited,0,sizeof(visited)); 
		for (i=1;i<=N;i++)
		{
			for (j=1;j<=N;j++)
			{
				mapp[i][j]=INF;
			}
		}
		for(i=1;i<=N*(N-1)/2;i++)
		{
			cin>>a>>b>>c;
			mapp[a][b]=mapp[b][a] = c;
		}
		for(j=1;j<=N;j++)	dis[j] = mapp[1][j];
		visited[1] = 1;
		for(i=1;i<=N;i++)
		{
			min = INF;
			for(j=1;j<=N;j++)
			{
				if(!visited[j] && min>dis[j])
				{
					min = dis[j];
					t=j;
				}
			}
			if(min != INF) sum+=min;
			visited[t] = 1;
			for(j=1;j<=N;j++)
			{
				if(!visited[j] && dis[j]>mapp[t][j])
				{
					dis[j] = mapp[t][j];
				}
			}
		}
		cout<<sum<<endl;
	}
	return 0; 
}
