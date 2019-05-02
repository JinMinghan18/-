#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long a[30],x,sum=0;
	for(int i=0 ; i<=29;i++)
	{
		a[i]=i;
	}
		cin>>x;
	for(int j=0;j<30 ;j++)
		{	
			sum+=a[j]*pow(x,j); 
		}
		cout<<sum;
}
