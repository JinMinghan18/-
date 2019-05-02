#include <bits/stdc++.h>
using namespace std;
int gcd (int a ,int b)
{
	if(b==0) return a; 
	else return gcd(b,a%b);
}
int main()
{ int a[5],b,c;
	for(int i=0 ;i<5;i++)
	{
		cin>>a[i];
	 } 
	 b = a[0],c=a[0];
	for (int i=1 ;i<5 ; i++){
		b = gcd(b,a[i]);
		c *= a[i]/gcd(c,a[i]) ;
	}
	cout<<b<<" "<<c;
	
}
