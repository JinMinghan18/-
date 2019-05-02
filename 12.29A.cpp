#include <iostream>
using namespace std;
int main()
{
	int n,k = 1,i=1,b,pos,m;
	cin>>n>>m;
	int num = n;
	int * p = new int[100]();
	while(n!=1)
	{
		if(i>num) i = 1; 
		if(*(p+i) != 0)
		{
			i++;
			continue;
		}
		if(k == m)
		{
			*(p+i) = 1;
			n--;
			k = 0;
		}
		k++; i++;
	}
	int j = 1;
	while (*(p + j) !=0) j++;
	pos = j;
	cout<<pos;
	delete p;
} 
