#include <stdio.h>
#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		double a;
		cin>>a;
		if(a*a-4*a<0) cout<<'N'<<endl;
		else 
		{
			double ans = (a+sqrt(a*a-4*a))/2.0;
			cout<<"Y "<<fixed<<setprecision(9)<<ans<<" "<<a-ans<<endl;
		} 
	}
}
