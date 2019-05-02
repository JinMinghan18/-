#include<iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		int n;
		cin>>n;
		int a = (1+n)*(n-1)/2;
		int sum = a*(a-1)/6;
		cout<<sum;
	}
} 
