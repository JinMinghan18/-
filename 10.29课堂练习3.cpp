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
	cout<<"a和A的数量是:"<<a[1]<<endl;
	cout<<"e和E的数量是:"<<a[2]<<endl;
	cout<<"i和I的数量是:"<<a[3]<<endl;
	cout<<"o和O的数量是:"<<a[4]<<endl;
	cout<<"u和U的数量是:"<<a[5]<<endl;
} 

