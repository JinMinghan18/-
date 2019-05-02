#include<iostream>
using namespace std;

int main()
{
	long long a,n,mod=1000000007,temp=1;
	while(cin>>n)
	{
		a = 0;
		temp = 1;
		for(int i = 1;i <= n;i++)
		{
			temp = temp * i % mod;
			a = (a + temp) % mod;
		}
		cout<<a<<endl; 
	}
	return 0;
}
