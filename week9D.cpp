#include <iostream>
#include <algorithm>
using namespace std;
long long d[100010];
int main()
{
	int n;
	long long *po;
	long long m;
	bool flag=false;
	cin>>n;
	for (int i=0; i<n;i++)
	{
		cin>>d[i];
	}
	cin>>m;
	sort(d,d+n);
	for (int i=0;i<n;i++){
		long long b=m-d[i];
		po=lower_bound(d+i+1,d+n,b);
		if(*po==b) {cout<<d[i]<<" "<<b<<endl;flag=true;break;};
		
		
	}
	if (!flag){cout<<"No"<<endl;
	return 0;
	}
} 
