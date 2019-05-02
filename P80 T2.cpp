#include <iostream>
#include <cmath>
#include <iomanip>
#define pi 3.1415926
using namespace std;
int main()
{	double h ,r;
	double C ,S1 ,S2 ,V1 ,V2; //定义输出量 
	cin >> r>>h;
	C=2*pi*r; S1=pi*pow(r,2); S2=4*pi*pow(r,2);
	V1=4/3*pi*pow(r,3); V2=pi*pow(r,2)*h;
	
	cout<<"圆周长=" << fixed<<setprecision(2)<<C <<endl;
	cout<<"圆面积=" <<setprecision(2)<<S1 <<endl;
	cout<<"圆球表面积=" <<setprecision(2)<<S2 <<endl;
	cout<<"圆球体积=" <<setprecision(2)<<V1 <<endl;
	cout<<"圆柱体积=" <<setprecision(2)<<V2 <<endl;
  } 
