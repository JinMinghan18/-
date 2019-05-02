#include <iostream>
#include <algorithm>
using namespace std;
int main()
{    char a[3],c[3];
	int b[3];
	for(int i=0 ; ;i++){
		for (int i=0 ; i<3 ;i++){
	cin>>a[i];}
	b[0]=a[0];b[1]=a[1];b[2]=a[2];
	for(int i=0; i<3 ;i++){
		sort (b,b+3);		 
		c[i]=b[i]; 
	
 }
 	cout<<c[0]<<" "<<c[1]<<" "<<c[2];
 cout<<endl; 
}
}
