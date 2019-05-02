#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
struct timey
{
	int sec,xuhao;
}m[20010];
bool cmp(timey a,timey b)
{
	return a.sec<b.sec; 
}
int main()
{
	int cas;
	cin>>cas;
	while (cas--)
	{
		int N,L,hour,min,second,a[20010],count=0,minn = -1;
		cin>>N>>L;
		for(int i=1;i<=N;i++)
		{
			scanf("%d:%d:%d",&hour,&min,&second);
			m[i].sec = hour*3600+min*60+second;
			m[i].xuhao = i;
		}
		sort(m+1,m+N+1,cmp);
		for(int i=1;i<=N;i++)
		{
			if(m[i].sec>=minn)
				a[count++] = m[i].xuhao,minn = m[i].sec+L;
		}
		sort(a,a+count);
		cout<<count<<endl;
		cout<<a[0];
		for(int i=1;i<count;i++)
		cout<<' '<<a[i];
		cout<<endl;		
	}
}
