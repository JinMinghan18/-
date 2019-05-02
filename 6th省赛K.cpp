#include <stdio.h>
#include <cstring>
int mmp[20][20]; 
int main()
{
	int N;
	scanf("%d",&N);
	while(N--)
	{
		int n,m,k;
		scanf("%d%d%d",&n,&m,&k);
		memset(mmp,-1,sizeof(mmp));
		for(int i=1;i<n-1;i++)
		{
			for(int j=1;j<m-1;j++)
				{
					if(k<=0) break;
					if(mmp[i][j]<=0)
					{
						mmp[i][j] = 0;
						mmp[i-1][j] = 0;
						mmp[i][j-1] = 0;
						mmp[i+1][j] = 0;
						mmp[i][j+1] = 0;
						k--;
					}
				}
			if(k<=0) break;
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(mmp[i][j] < 0) mmp[i][j] = 1;
			}
		}
		for(int i=0;i<n;i++)
		{
			printf("%d", mmp[i][0]);
			for(int j=1;j<m;j++)
			{
				printf(" %d",mmp[i][j]);
			}
			printf("\n");
		}
	}
}
