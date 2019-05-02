#include <iostream>
using namespace std;
int main()
{
	int T,order;
	cin>>T;
	while(T--)
	{
		order++;
		int a,b;
		cin>>a>>b;
		if(a == b)
		{
			cout<<"Case #"<<order<<":"<<endl;
			cout<<1<<endl;
			cout<<a<<' '<<b;
		}
		else 
		{
			if(a>b)
			{
				cout<<"Case #"<<order<<":"<<endl;
				cout<<2<<endl;
				cout<<a<<' '<<b;
				cout<<b<<' '<<a;
			} 
			else
			{
				cout<<"Case #"<<order<<":"<<endl;
				cout<<2<<endl;
				cout<<b<<' '<<a;
				cout<<a<<' '<<b;
			}
		}	
	}
	return 0;
}
