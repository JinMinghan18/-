#include <iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,a[1000]={} ,b[1000]={} ;
		cin>>n;
		int i=0;
		
		cin>>a[0]>>b[0];
		i=a[0]+1;
		cout<<a[0];
		for(int p=1;p<n;p++)
		{
			cin>>a[p]>>b[p];
			if(i<a[p]) i = a[p];
			if(i>b[p] && i>=a[p])
			{
				
				cout<<" 0";
				
			}
			else if(i>=a[p] && i<=b[p])
			{
				
				cout<<' '<<i;
				
				i++;
			}
		}
		cout<<endl;
	}
		
		
	
}
