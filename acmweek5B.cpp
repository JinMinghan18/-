#include <iostream>
#include <cstring>
using namespace std;
int main()
{

	char str[100000]={};
	while (gets(str)){
		int a[130]={};
		int len=strlen(str);
		for(int i=0;i<len;i++){ 
	if ((str[i]>='a') &&(str[i]<='z'))
	 a[str[i]]++;
	}	

	for(int i=97;i<=122;i++)
	{
		char j=i;
		cout<<j<<':'<<a[i]<<endl;
	}
cout<<endl;}	
}  
