#include<iostream>
#include<cmath>
#include<iomanip>
#define EFS 1e-5
using namespace std;
int main()
{
	double x,sum=1.0,temp=1.0;
	cin>>x;
	for(int i=1;i<10000;i++)
	{
		
		temp=temp*x/i;
		sum+=temp;
		if(temp<1e-5) break;
	} 
	cout<<fixed<<setprecision(4)<<sum; 

}
	

