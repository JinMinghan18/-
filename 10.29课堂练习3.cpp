#include<iostream>
using namespace std;
int main()
{
	int a[99] = {};
	for (int i = 1;i<=10;i++)
	{
		char c;
		cin>>c;
		switch	(c){
			case 65:a[1]++;break;
			case 69:a[2]++;break;
			case 73:a[3]++;break;
			case 79:a[4]++;break;
			case 85:a[5]++;break;
			case 97:a[1]++;break;
			case 101:a[2]++;break;
			case 105:a[3]++;break;
			case 111:a[4]++;break;
			case 117:a[5]++;break;
		}
	}
	cout<<"a��A��������:"<<a[1]<<endl;
	cout<<"e��E��������:"<<a[2]<<endl;
	cout<<"i��I��������:"<<a[3]<<endl;
	cout<<"o��O��������:"<<a[4]<<endl;
	cout<<"u��U��������:"<<a[5]<<endl;
} 

