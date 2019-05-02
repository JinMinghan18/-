#include <iostream>
using namespace std;
int main()
{
	long long  n,sum1=0,sum2 = 0;
	int x1[1010],y1[1010],x2[1010],y2[1010];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x1[i]>>y1[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>x2[i]>>y2[i];
	}
	for(int i =0 ;i<n;i++)
	{
		sum1 += x1[i]+x2[i];
		sum2 += y1[i]+y2[i];
	}
	sum1/=n;
	sum2/=n;
	cout<<sum1<<" "<<sum2<<endl;
}
