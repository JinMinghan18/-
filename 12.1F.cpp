#include<iostream>
using namespace std;
int T,n,a[10005],count=1,maxN=0;
int main()
{
	
	cin>>T;
	for(int i=0;i<T;i++)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			if(a[i]+1==a[i+1]) count++;
			else if(count>maxN)
			{
				maxN=count;
				count=1;
			}

		}
		cout<<maxN<<endl;
		maxN=0;
		count=1;

			}
	return 0;
}
