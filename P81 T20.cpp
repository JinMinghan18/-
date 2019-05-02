#include <iostream>
using namespace std;
int main()
{	int s, i=1,j,n,a[100]={};
	int len;
	cin>>n;
	while  (i<=n/2){
		if (n%i==0){
			a[len]=i;
			len++;				
		}
		i++;
	}
	for(j=0;j<len;j++) 
	{
	s+=a[j];}
	if (s=n)
	cout<<n;
    for(j=0;j<len;j++)
	cout<<a[j];	
}

