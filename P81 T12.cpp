#include <iostream>
using namespace std;
int main( )
{
    long a,b,c,d,e,x;
    cout << "��������λ����" << endl;
	cin>>x;
	a=x/10000;        /*�ֽ����λ*/
    b=x%10000/1000;   /*�ֽ��ǧλ*/
    c=x%1000/100;     /*�ֽ����λ*/
    d=x%100/10;       /*�ֽ��ʮλ*/
    e=x%10;           /*�ֽ����λ*/
    if (a!=0){
         cout<<"��λ��"<<e<<d<<c<<b<<a<<endl;
	} else if(b!=0) {
         cout<<"��λ��"<<e<<d<<c<<b<<endl;
	} else if(c!=0) {
           cout<<"��λ��"<<e<<d<<c<<endl;
    } else if(d!=0) {
           cout<<"��λ��"<<e<<d<<endl;
    } else if(e!=0) {
           cout<<"һλ��"<<e<<endl;
	}
}
