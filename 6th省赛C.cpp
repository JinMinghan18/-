#include <iostream>
#include <cstring>
const int maxn=200;
const int INF = 1000000007; 
using namespace std;
int visited[maxn],mmp[maxn][maxn],cost[maxn];
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,minn,i,j,t;
		int sum = 0;
		memset(visited,0,sizeof(visited));
		cin>>N;
		for(int i=0;i<N;i++)
			for(int j=0;j<N;j++)
				cin>>mmp[i][j];
		for( i=0;i<N;i++)	cost[i] = mmp[0][j];
		visited[0] = 1;
		for( i=0;i<N;i++)
		{
			minn = INF;
			for( j=0;j<N;j++)
			{
				if(!visited[j] && minn>cost[j])
				{
					minn = cost[j];
					t = j;
				}
			}
			if(minn != INF) sum+=minn;
			visited[t] = 1;
			for(j=0;j<N;j++)
			{
				if(!visited[j] && cost[j]>mmp[t][j])
				{
					cost[j] = mmp[t][j];
				} 
			}
		}
		int flag = 1;
		for(int i = 0;i<N;i++)
		{
			if(visited[i] = 0) 
			{
				flag = 0;
				break;
			}
		}
		if(flag) cout<<sum<<endl;
		else cout<<'-1'<<endl;
	}
}
