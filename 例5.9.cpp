#include <iostream>
using namespace std;
int main()
{ 
	char diamong[][5]={{' ',' ','*'},{' ','*',' ','*'},{'*',' ',' ',' ','*'},{' ','*',' ',' ','*'},{' ',' ','*'}};
	int i,j;
	for (int i=0;i<5;i++)
	{ 
		for (j=0;j<5;j++)	cout<<diamong[i][j];
		cout<<endl;
	} 
}
