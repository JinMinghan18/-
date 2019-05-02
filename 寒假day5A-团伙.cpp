#include <iostream>
#include <cstdio>
int p[2010];
int N,M; 
using namespace std;
void ini(int c)
{
	for(int i = 1;i<=c;i++)
	{
		p[i] = i;
	}
}
int find(int a)
{
	if(p[a] == a) return a;
	int t = a;
	while(p[a]!=a)
	{
		a = p[a];
	}
	while(p[t]!= t)
	{
		int t2 = t;
		t = p[t];
		p[t2] = a;
	}
	return a;
}
inline void unit (int a,int b)
{
	a = find(a);
	b = find(b);
	if(a!=b)
	{
		p[b] = a;
	}
}
int main()
{
	scanf("%d%d",&N,&M);
	ini(N*2);
	for(int i=1;i<=M;i++)
	{
		char C;
		int x,y;
		getchar();
		scanf("%c",&C);
		scanf("%d%d",&x,&y);
		if(C == 'F')
		{
			unit(x,y);
		}else
		{
			unit(x,y+N);
			unit(y,x+N);
		} 	
	}
	int ans = 0;
	for(int i = 1;i<=N;i++)
		if(find(i) == i) ans++;
	printf("%d\n",ans);
	
}
