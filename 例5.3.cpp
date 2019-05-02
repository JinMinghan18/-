#include <iostream>
using namespace std;
int main()
{
	int a[11];
	int i,j,t;
	cout <<"input 10 number :"<<endl;
	for (i=1;i<11;i++)
		cin>>a[i];
	cout <<endl;
	for (j=1;j<10;j++)
		for (i=1; i<=9;i++)
			if (a[i]>a[i+1] )
			{t=a[i] ;a[i] =a[i+1];a[i+1]=t;
				}	
	cout <<"the sorted numbers :"<<endl;
	for (i=1;i<11;i++)
		cout <<a[i]<<" ";
	cout<<endl;
	return 0;			
}
