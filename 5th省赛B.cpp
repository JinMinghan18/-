#include<bits/stdc++.h>
const int maxN=510;
const int INF=1000000007;
using namespace std;
int visited[maxN],mapp[maxN][maxN],dis[maxN];
int main()
{
	int T;
	int N,E,i,j,a,b,c,sum=0,min,t;
	cin>>T;
	while (T--)
	{
		sum = 0; 
		memset(visited,0,sizeof(visited)); 
		cin>>N>>E;
		for (i=0;i<N;i++)
		{
			for (j=0;j<N;j++)
			{
				mapp[i][j]=INF;
			}
		}
		for(i=0;i<E;i++)
		{
			cin>>a>>b>>c;
			mapp[a][b]=mapp[b][a] = c;
		}
		for(j=0;j<N;j++)	dis[j] = mapp[0][j];
		visited[0] = 1;
		for(i=0;i<N;i++)
		{
			min = INF;
			for(j=0;j<N;j++)
			{
				if(!visited[j] && min>dis[j])
				{
					min = dis[j];
					t=j;
				}
			}
			if(min != INF) sum+=min;
			visited[t] = 1;
			for(j=0;j<N;j++)
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
