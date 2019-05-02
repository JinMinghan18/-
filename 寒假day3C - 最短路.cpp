#include<iostream>
#include <algorithm>
using namespace std;
#define INF 0x3f3f3f3f
#define maxn 10010
int N,M;
int mmp[maxn][maxn];
int edge_b[maxn];

int main()
{
	while(scanf("%d%d",&N,&M)&&N+M!=0)
	{
		for(int i=1;i<=N;i++)
		{
			for(int j = 1;j<=N;j++)
				mmp[i][j] = INF;
		}
		for(int i =1;i<=N;i++)
		{
			mmp[i][i] = 0;
		} 
		
		while(M--)
		{
			int A,B,C;
			scanf("%d%d%d",&A,&B,&C);
			mmp[A][B] = mmp[B][A]=C;
		}
		for(int k=1;k<=N;k++)
		for(int i=1;i<=N;i++)
		for(int j=1;j<=N;j++)
		mmp[i][j] = min(mmp[i][j],mmp[i][k]+mmp[k][j]);
		cout<<mmp[1][N]<<endl;
	}
}
