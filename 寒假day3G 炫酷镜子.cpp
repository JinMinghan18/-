#include <bits/stdc++.h>
using namespace std;
int N,M;
char a[510][510];
int choi(int x,int y)
{
	if(x>=1 && x<=N && y>=1 && y<=M) return 1;
		else return 0;
}
int run(int x,int y,int t)
{
	if(choi(x,y))
	{
		if(a[x][y] == '.')
		{
			switch(t)
			{
				case 1: return run(x+1,y,t);break;
				case 2: return run(x,y+1,t);break;
				case 3: return run(x-1,y,t);break;
				case 4: return run(x,y-1,t);break;
			}
		}
		else if(a[x][y] == '/')
		{
			switch(t)
			{
				case 1: return run(x,y-1,4);break;
				case 2: return run(x-1,y,3);break;
				case 3: return run(x,y+1,2);break;
				case 4: return run(x+1,y,1);break;
			}
		}
		else 
		{
			switch(t)
			{
				case 1: return run(x,y+1,2);break;
				case 2: return run(x+1,y,1);break;
				case 3: return run(x,y-1,4);break;
				case 4: return run(x-1,y,3);break;
			}
		}
	}
		else 
		{
			if(x == N+1){
			return y;
			}
			else 
			{
				return -1;
			}
		}
		return 0;
    } 
	

int main()
{
	
	scanf("%d%d",&N,&M);
	for(int i=1;i<=N;i++)
	{
		scanf("%s",a[i]+1);
	}
	for(int i = 1;i<=M;i++)
		printf("%d\n",run(1,i,1));
}
