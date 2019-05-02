#include <bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
	return a>b;
}
int main()
{
	int T;
	cin>>T;
	while (T--)
	{
		char a[20];
		int k,b[2010]={};
		cin>>a;
		if(!strcmp(a,"Faster"))
		{
			cin>>k;
			for(int i=0;i<k;i++)	cin>>b[i];
			sort(b,b+k);
			cout<<b[0]<<endl;
		}
		else
		{
			cin>>k;
			for(int i=0;i<k;i++)	cin>>b[i];
			sort(b,b+k,cmp);
			cout<<b[0]<<endl;
		}
		
	}
}
