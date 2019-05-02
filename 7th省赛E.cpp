#include <bits/stdc++.h>
using namespace std;
bool panduan[32] = {0,0,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1};
int month[13] ={0,31,28,31,30,31,30,31,31,30,31,30,31};
bool runnian(int y)
{
	if((y%4 == 0 && y%100 !=0) || y%400 == 0)	return true;
	else return false;
}
int main()
{
	int y1,m1,d1,y2,m2,d2;
	int N;
	cin>>N;
	while(N--)
	{
			int cnt = 0;
			cin>>y1>>m1>>d1>>y2>>m2>>d2;
			if(y1 == y2)
			{
				
				if(m1 == m2) 
				{	
					if(panduan[m1])
					{
						for(int i = d1;i<=d2;i++)
						{
							if(panduan[i])
							cnt++;
						}
					}
				}
				
				else 
				{
					if(runnian(y1)) month[2] = 29;
					if(panduan[m1])
					{
						for(int i = d1;i<=month[m1];i++)
						{
							if(panduan[i]) cnt ++;
						}
					}
					if(panduan[m2])
					{
						for(int i=1;i<=d2;i++)
						{
							if(panduan[i]) cnt++;
						}
					}
					for(int i=m1+1;i<m2;i++)
					{
						if(panduan[i])
						{
							for(int j=1;j<=month[i];j++)
							if(panduan[j]) cnt ++;
						}
					}
					month[2] = 28;
				}
					
			}
			else
			{
				if(runnian(y1)) month[2] = 29;
				if(panduan[m1])
				{
					for(int i=d1;i<=month[m1];i++)
					{
						if(panduan[i]) cnt++;
					}
				}
				for(int i=m1+1;i<=12;i++)
				{
					if(panduan[i])
					{
						for(int j=0;j<=month[i];j++)
							if(panduan[j]) cnt++; 
					}
				} 
				month[2] = 28;
				if(runnian(y2)) month[2]=29;
				if(panduan[m2])
				{
					for(int i=1;i<=d2;i++)
					if(panduan[i]) cnt++;
				}
				for(int i=1;i<m2;i++)
				{
					if(panduan[i])
					{
						for(int j=1;j<=month[i];j++)
						{
							if(panduan[j]) cnt++; 
						}
					}
				}
				month[2]=28;
				for(int i=y1+1;i<=y2-1;i++)
				{
					if(runnian(i))
					cnt+=53;
					else cnt+=52;
				}
			}
			cout<<cnt<<endl;
			}
}
	
