#include <iostream>
using namespace std;
int a[10010];
void init()
{
	
	a[1928] = 2;
	for(int i=1929;i<=9999;i++)
	{
	if((i%4 == 0 && i%100 != 0) || (i%400) == 0) a[i] = (a[i-1] +366)%7;
	else a[i] = (a[i-1]+365) % 7;
	}
	
}
int main()
{
	init();
	int N;
	cin>>N;
	while(N--)
	{
		int year;
		cin>>year;
		if(a[year] == 1) cout<<9<<endl;
		else if(a[year] == 2) cout<<6<<endl;
		else if(a[year] == 3) cout<<5<<endl;
		else if(a[year] == 4) cout<<5<<endl;
		else if(a[year] == 5) cout<<5<<endl;
		else if(a[year] == 6) cout<<5<<endl;
		else if(a[year] == 0) cout<<6<<endl;
	}
}
