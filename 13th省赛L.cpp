#include<iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		int n,a,sum = 0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			sum+=a;
		}
		sum+=n;
		cout<<sum<<endl;
		
	}
} 
