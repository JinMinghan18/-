#include <iostream>
#include <cmath>
using namespace std;
int main()
{ long a,Sn=0,j;	int n,i=1;
cout<<"ÇëÊäÈëaºÍn"<<endl;
	cin >>a >>n;
		j=a; 
		while (i<=n){
			Sn=Sn+j;
			i++ ;
			j+=a*pow(10,i-1); 
			
	}	
	cout<<Sn<<endl;
}
