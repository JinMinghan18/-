#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	for(int k=0;k<T;k++){ 
	string a,b;
	cin>>a>>b;
	int c[1001],d[1001];
	int lenc=0;
	for (int i = a.length()-1;i>=0;i--){
		c[lenc]= a[i] - 48;
		lenc++;
			}
			int lend=0;
	for (int  i = b.length()-1; i>=0 ; i--){
		d[lend]= b[i] - 48;
		lend++ ;
			}
	int max;
	if (lenc>lend ) max=lenc;
		else max=lend;
	int temp=0 ,e[1000];
	for (int j=0;j<max-1;j++)
	{
		e[j]=d[j]+c[j]+temp;
		temp = e[j] / 10;
		e[j] %= 10;
	}
	if (temp==1) e[max]=1;
	else max--;
	for (int i=max;i>=0;i--)
	cout<<e[i];}
	return 0;
			 
	 
}
