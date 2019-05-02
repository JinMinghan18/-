#include <iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		int m,n,sum1=0,sum2=0,t;
		cin>>m>>n;
		for(int i=0;i<m;i++)
		{
			cin>>t;
			sum1+=t;
		} 
		for(int i=0;i<n;i++)
		{
			cin>>t;
			sum2+=t;
		}
		if(sum1>sum2) cout<<"Calem"<<endl;
		if(sum1<sum2) cout<<"Serena"<<endl;
		if(sum1==sum2) cout<<"Draw"<<endl;
	}
	
}
