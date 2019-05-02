#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		long long a,b,c,P,maxn=0,minn=0,i,j;
		cin>>a>>b>>c;
		for(i=0;i<c;i++)	maxn+=50*(i*2+1); 
		for(i = c;i<b+c;i++)	maxn += 100*(i*2+1);
		for(i = b+c;i<a+b+c;i++)	maxn += 300*(i*2+1);
		for(j=0;j<a;j++)	 minn+=300*(j*2+1);
		for(j = a;j<a+b;j++) 	minn +=100*(j*2+1);
		for(j = a+b;j<a+b+c;j++)	minn +=50*(j*2+1);
		cout<<minn<<' '<<maxn<<endl;
	} 
}
