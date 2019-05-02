#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double a,b,c ;
	cout << "please enter a,b,c:";
	cin>>a>>b>>c;
	if (a+b>c && b+c>a &&a+c>b )
	{                                     //复合语句开始 
		double s,area;                    //复合语句中定义变量 
	    s=(a+b+c)/2;
		area=sqrt(s*(s-a)*(s-b)*(s-c)) ;
		cout<<setiosflags(ios::fixed)<<setprecision(4);   //指定输出的数包含四位小数 
		cout<<"area="<<area<<endl;                         //复合语句内输出局部变量的值 
	}
	else cout<<"it is not a triateral!"<<endl;
	return 0;
 } 
