#include <iostream>
using namespace std;
int main()
{
	int M=0,N=0,a[41]={},i=0;
	cin>>N;
	a[1]=1;
	a[2]=1;
	for(i=3;i<41;i++)
		a[i]=a[i-1]+a[i-2];
	while (N--){
		cin>>M;
		cout<<a[M]<<endl;
	}
}

