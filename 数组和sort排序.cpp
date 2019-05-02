#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a[4];
	int i=0;
	while ( i<4){
		cin>>a[i];
		i++;
	}
	sort(a,a+4);
	for(int i=0;i<4;i++)
		cout<<a[i];
 	return 0;
 } 
