#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
struct node
{
	int cnt ,id;
}m[1010];
bool cmp(node a,node b)
{
	return a.cnt<b.cnt;
}
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		int n,a,b[1010]={} ,flargest;
		cin>>n;
		memset(m,0,sizeof(m));
		for(int i=0;i<n;i++)
		{
			cin>>a;
			m[a].id = a ;
			m[a].cnt ++;
		}
		sort(m,m+1001,cmp);
		if(m[1000].cnt == m[999].cnt)	cout<<"Nobody"<<endl;
		else cout<<m[1000].id<<endl;
	}
}
