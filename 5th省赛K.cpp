#include <bits/stdc++.h>
using namespace std;
char mmp[260][260];
char fuwa[5] = {'B','J','H','Y','N'};
long long sum ;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,m;
		cin>>n>>m;
		for(int i=0;i<n;i++) cin>>mmp[i];
		sum = 0;
		for(int i=0;i<5;i++)
			for(int j=0;j<n-1;j++)
				for(int k=j+1;k<n;k++)
				{
					long long l = 0;
					for(int v = 0;v<m;v++)
					{
						if(mmp[j][v] == mmp [k][v] && mmp[j][v] == fuwa[i])
							l++;
					}
					sum+=l*(l-1)/2;
				}
			cout<<sum<<endl; 
	}
}
