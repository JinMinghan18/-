#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int k,a,cnt= 0 ;
		cin>>k;
		while(k--)
		{
			cin>>a;
			if(a>6000) cnt ++;
		}
		cout<<cnt<<endl;
	}
}
