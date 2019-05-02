#include <bits/stdc++.h>
using namespace std;
int main()
{
	char a[110][20],b[20];
	int N;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>a[i];
	}
	int K;
	cin>>K;
	while(K--)
	{
		int NI,count=0;
		cin>>NI;
		for(int i=0;i<NI;i++)
		{
			cin>>b;
			for(int j=0;j<N;j++)
				if(!strcmp(b,a[j])) count ++;
			
		}
		cout<<count<<endl;
	}
}
