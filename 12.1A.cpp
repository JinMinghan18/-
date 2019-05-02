#include<iostream>
using namespace std;
int main()
{
	int T,n,a,flag;
	cin>>T;
	while(T--)
	{
		cin>>n;
		flag=0;
		while(n--)
		{cin>>a;
		if(a<=0) flag=1;
		}	
		if(flag)
		cout<<"Transform Mobility With Autonomous Driving"<<endl;
		else 
		cout<<"WeRide.ai"<<endl;
	
	}
	return 0;
}
