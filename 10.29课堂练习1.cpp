#include <iostream>
using namespace std;
int main()
{	int  n=0,sum=0;
  
	for(int i=1;i<=100;i++){
		for(int k=1;k<=50;k++)
			{for(int j=1;j<=20;j++){
				sum=i+k*2+j*5;
				if(sum==100) 
	{ n++;
	cout<<i<<" ";
	cout<<j<<" ";	
	cout<<k<<endl;}
 
			}
			}
	}cout<<n;
	} 
