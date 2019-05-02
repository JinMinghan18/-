#include <iostream>
using namespace std;
int main()
{ int a,i=1,number;
	cout<<"请输入要测试的个数\n";
	cin>>number;
		while (i<=number){
			cout <<"第"<<i<<"组"<<endl;
			cout<<"input:";
			cin>>a;
			cout<<"output:"<<a+1<<endl;
			i++; 
		}
		return 0;
 } 
