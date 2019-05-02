#include<iostream>
using namespace std;
int main()
{
	int n,m,a[11] = {},i = 0;
	cin>>n;
	m = n;
	while (m>0)
	{
		i++;
		a[i] = m % 10;
		m = m/10;
	}
	cout<<i<<endl;
	for (int j = 1;j<=i;j++)	cout<<a[j];
	return 0;
} 
