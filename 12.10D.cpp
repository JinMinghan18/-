#include <iostream>
#define N 100
using namespace std;

int sort(int a[],int len)
{
	int t,i,j;
	for(i=j=0;i<len;i++)
	{
		if(a[i]>a[j]) j=i;
		t=a[len-1]; 
		a[len-1]=a[j] ;
		a[j]=t;
		if(len>1) sort(a,len-1);
	}
}
int main()

{
	int a[N],i,len;
	cin>>i;
	for(int j=0;j<i;j++)
	{cin>>a[j];
	}
	len=i;
	sort(a,len);
	for(int i=0;i<len;i++)
	{ 
		cout<<a[i]<<" ";
	} 
	 cout<<endl;
	 return 0;
}
