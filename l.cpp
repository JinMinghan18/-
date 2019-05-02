#include <iostream>
using namespace std;
int main()
{
	double a,b,d;
	char p;
	cout<<"Input epression"<<endl;
	cin>>a>>p>>b;
	switch(p)
	{
		case '+': d=a+b; break;
		case '-': d=a-b; break;
		case '*': d=a*b; break;
		case '/': d=a/b; break;
		default:cout<<"the operator or the date is error\n";
		exit(0);
		
	}
	cout<<d<<endl;
	return 0;
}
