#include <iostream>
using namespace std; 
int main()
{ 
	
	 for (int i = 1;i<=4;i++)
	{
		int j = 2*i-1;
		for (int k = 1;k<=8-2*i;k++)	cout<<' ';
		cout<<"*";
		for (int k = 1;k<=j-1;k++)	cout<<" *";
		for (int k = 1;k<=8-2*i;k++)	cout<<' ';
		cout<<endl;	
	}
	for (int i = 3;i>=1;i--)
	{
		int j = 2*i-1;
		for (int k = 1;k<=8-2*i;k++)	cout<<' ';
		cout<<"*";
		for (int k = 1;k<=j-1;k++)	cout<<" *";
		for (int k = 1;k<=8-2*i;k++)	cout<<' ';	
		cout<<endl;
	}

}
