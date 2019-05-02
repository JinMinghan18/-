#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,N,a,b,c,d;
	for(int n=32;n<=100;n++)
			{
  			    int 	num=pow(n,2);
				a=num/1000;
				b=(num-1000*a)/100;
				c=(num-a*1000-b*100)/10;
				d=num%10;
			if((a==b)&&(c==d))  cout<<pow(n,2)<<endl;
			}
			
	}

	

