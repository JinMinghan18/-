#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double bizhi,COSA,SINA,x1,x2,x3,y1,y2,y3,a,b,c,p1,p2,q1,q2,k1,k2,r,R,S,s,halfc,temp;
	int N;
	cin>>N;
	while  (N--)
	{
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		b=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
		c=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
		if (a+b>c&&b+c>a&&a+c>b) 
		{
			halfc=(a+b+c)/2;
			temp=sqrt(halfc*(halfc-a)*(halfc-b)*(halfc-c));
			r=2*temp/(a+b+c);
			COSA=(b*b+c*c-a*a)/(2*b*c);
			SINA=sqrt(1-COSA*COSA);
			R=(a/2)/SINA;
			S=R*R;
			s=r*r;
			bizhi=S/s;
			cout<<fixed<<setprecision(3)<<bizhi<<endl;
		}	
		else cout<< " NOSOLUTION "<<endl;
	}
}
