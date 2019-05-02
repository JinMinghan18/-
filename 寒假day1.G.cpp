#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,order = 0;
	long long sum = 0;
	cin>>N;
	while(N--)
	{
		order ++;
		long long t;
		cin>>t;
		sum = (2+t)*(t-1)/2;
		cout<<"Case #"<<order<<": "<<sum<<endl;
	}
}
