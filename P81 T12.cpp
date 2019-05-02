#include <iostream>
using namespace std;
int main( )
{
    long a,b,c,d,e,x;
    cout << "请输入五位数：" << endl;
	cin>>x;
	a=x/10000;        /*分解出万位*/
    b=x%10000/1000;   /*分解出千位*/
    c=x%1000/100;     /*分解出百位*/
    d=x%100/10;       /*分解出十位*/
    e=x%10;           /*分解出个位*/
    if (a!=0){
         cout<<"五位数"<<e<<d<<c<<b<<a<<endl;
	} else if(b!=0) {
         cout<<"四位数"<<e<<d<<c<<b<<endl;
	} else if(c!=0) {
           cout<<"三位数"<<e<<d<<c<<endl;
    } else if(d!=0) {
           cout<<"两位数"<<e<<d<<endl;
    } else if(e!=0) {
           cout<<"一位数"<<e<<endl;
	}
}
