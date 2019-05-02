#include <iostream>
using namespace std;
int main()
{
	int T,n,temp;
	cin>>T;
	while (T--)
	{
		cin>>n;
		do
		{
			if(n&1){cout<<n<<"*3+1="; n=n*3+1;cout<<n<<endl;}
			else {cout<<n<<"/2=";n/=2;cout<<n<<endl;}
		} while(n!=1);
	if(T>=1)	cout<<endl;
	}
return 0;
}

