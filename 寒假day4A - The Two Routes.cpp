#include<iostream>
#include <cstring>
#define maxn 500
using namespace std;
int n,m;
int mmp[maxn][maxn];
int main()
{
	cin>>n>>m;
	memset(mmp,0,sizeof(mmp));
	for(int i=1;i<=m;i++)
	{
		int u,v;
		cin>>u>>v;
		mmp[u][v] = mmp[v][u] = 1;
	}
	if(mmp[1][n] == 1)
	{
		for(int i =1;i<=n;i++)
			for(int j=1;j<=n;j++)
			mmp[i][j] = 1 - mmp[i][j];
	}
	for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            for(int k=1;k<=n;k++)
            {
                if(mmp[j][i]==0||mmp[i][k]==0)continue;
                if(mmp[j][k]==0)	mmp[j][k]=mmp[j][i]+mmp[i][k];
                mmp[j][k]=min(mmp[j][i]+mmp[i][k],mmp[j][k]);
            }
        }
    }
    if(mmp[1][n] == 0) cout<<-1<<endl;
    else cout<<mmp[1][n]<<endl;
} 
