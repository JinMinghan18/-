#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int L,M ,a[1000],b[500];
	cin>>L>>M;
	for(int i=0;i<M;i++)
	{
		cin>>a[i];
		sort(a,a+M*2);
		b[i]=a[2*i]-a[2*i-1];
	    L=L-b[i];
	} 
	cout<<L;
}
