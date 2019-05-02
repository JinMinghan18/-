#include <iostream>
using namespace std;
int main()
{
	int N,M;
	cin>>N>>M;
	int t[100010],a[100010],sum=0,temp;
		cin>>t[0]>>a[0]; 
		sum=a[0];
		if(sum>M){sum=0;cout<<sum<<endl;
		}
		cout<<a[0]-t[0]<<endl;
	for(int i=1;i<N;i++)
	{
		cin>>t[i]>>a[i];
		temp=t[i]-t[i-1];
		if(temp<sum) sum+=a[i]-temp;
		else sum=a[i];
		if(sum>M) {sum=0;cout<<sum<<endl;}
		else  cout<<sum<<endl;
	} 
} 
