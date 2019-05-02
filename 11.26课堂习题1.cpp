#include <iostream>
#include<algorithm>
using namespace std;
double b,av;
int sum=0,a[10],zhen=0;
int maxN(int a[10],int max1)
{
		sort(a,a+10);
	max1=a[9];
}
double averageN(int a[])
{

	for(int i=0;i<=9;i++)
	{
		sum+=a[i];
	}
	return av=(double)sum/10.0;
	
	}
int zhenshu( int a[],int zhen){
	for(int i=0;i<=9;i++){
		if(a[i]>0) zhen++;
	} 
}

int  main()
{
	for(int i=0;i<=9;i++){
		cin>>a[i];}
    b=(double)averageN(a);
	cout<<maxN(a,9)<<endl;
	cout<<b<<endl;
	cout<<zhenshu(a,zhen)<<endl;
}

 
