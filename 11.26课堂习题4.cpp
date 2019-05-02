#include <iostream>
#include <cmath>
#define wucha 1e-4
using namespace std;
int count=0;
double f(double x){
	return pow(x,3)+2*x+9;
}
int main(){
	double r=-10,l=0,mid;
	while(true){
		mid = (r+l)/2;
		if (f(mid)<0 )r=mid;
			else l=mid;
		if(fabs(f(mid))<=wucha){
			cout<<r<< " "<<l; break;
		}
	}
	
	
}
