#include <iostream>
using namespace std;
int main()
{long long n=1, s=0; 
int i,j;
	for (i=1;i<=20;i++)
	{	n*=i;
		s+=n;
	 } 
	 cout<<s;
}
