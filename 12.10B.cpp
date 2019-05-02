
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{	
	void find_two_largest(int a[],int n,int *largest_p,int *second_largest_p);
	int largest,second_largest,n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i]; 
	}
	find_two_largest( a,n,&largest,&second_largest);
	return 0;
}
void find_two_largest(int a[],int n,int *largest_p,int *second_largest_p)
{
	
	sort(a,a+n);
	*largest_p=a[n-1];
	*second_largest_p=a[n-2];
	cout<<*largest_p<<" "<<*second_largest_p ;
}

