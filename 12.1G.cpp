#include <iostream>
#include <iomanip>
#include <cmath>
#define pi acos(-1)
using namespace std; 
int main()
{
	int T;
	double n,S;
	cin>>T;
	while(T--)
	{
		cin>>n;
		cout<<fixed<<setprecision(8);
		if(n==0) cout<<"Impossble"<<endl;
		else {S=pow(n,2)/2/pi;cout<<S<<endl;} 
			}
}
