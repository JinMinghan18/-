#include <iostream>
using namespace std;
int main()
{
	int m,n,sum=1,num=0;
	cin>>m>>n;
	for(int i=m;i<=n;i++)
	{   sum=1;
		if(i == 1) continue;
			else 
			{
				for(int k=2;k<i;k++)
				{
					if(i % k == 0) sum+=k;
				}
				if(i == sum)
				{	cout<<i<<" = 1";
					num++;
					for(int t=2;t<i;t++)
					{
						
						if(i % t == 0) cout<<" + "<<t;
					}	
				cout<<endl;
				} 
			}
	
	}
	if(num == 0) cout<<"None";
}
