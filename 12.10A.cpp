#include <iostream>
#include <cmath>
using namespace std;
int jiec (int a)
{

	int b=1; 
	for(int i=1;i<=a;i++)
	{
		b*=i;
	}
	return b;
}
int main()
{
	double x,final=1,i=1;
	cin>>x;
	while(pow(x,i)/jiec(i)>1e-6)
	{
		final+=pow(x,i)/jiec(i);
		i++;
	} 
	cout<<final;
} 
