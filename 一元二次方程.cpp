#include <iostream>
#include <cmath>
using namespace std;
int main()
{ float a,b,c,X1,X2;
cin>>a>>b>>c;
X1=(-b+sqrt(b*b-4*a*c))/(2*a);
X2=(-b-sqrt(b*b-4*a*c))/(2*a);
cout<<"X1="<<X1<<endl;
cout <<"x2="<<X2<<endl;
return 0;
}
