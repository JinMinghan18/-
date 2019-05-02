#include <iostream>
using namespace std;
#include <cmath>
int main( )
{
    double an=1.0, k=0, sn=0;
    do
    {         an=pow(-1.0,k)*1.0/(2*k+1);
        sn=sn +an;   
k++;
    }while(abs(an)>1e-7);
    double PI=4*sn; cout<<"PI="<<PI<<endl;
}

