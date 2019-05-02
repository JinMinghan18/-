#include <iostream>
using namespace std;
int main()
{
	int T;
	long long order=0;
	cin>>T;
	while(T--)
	{
		order++;
		long long a,b;
		cin>>a>>b;
		cout<<"Case #"<<order<<":"<<endl;
		if(a == b)
		{
			cout<<1<<endl;
			cout<<a<<" "<<b<<endl;
		}
		else 
		{
				cout<<2<<endl;
				cout<<a<<" "<<b<<endl;
				cout<<b<<" "<<a<<endl;	
		}	
	}
	return 0;
}
