#include <iostream>
using namespace std;
int a[100010]={};
int main()
{
	int zt[100010]={0};
	zt[0]=0;zt[1]=1; 
	int n,m,w,y,aera=1,longs=0;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
		if(a[i]==1)
		{
			cin>>y>>w;
			if(zt[y]==0) aera++;
			else aera+=0;
			longs+=w;
			zt[y]=1;//记录是否走过该区域 
		}
		if(a[i]==2) cout<<aera<<" "<<longs<<endl;
	}		
} 
