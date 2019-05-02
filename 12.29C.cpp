#include <iostream>
#include <cmath>
#include <string.h> 
using namespace std;

double convert(char *str)
{
	int pos1,pos2,k=0;
	double c=0,d,f,g;//输出 
	char a[100],b[100];//a[]记录小数点前b[]记录小数点后 
	int len = strlen(str); 

	for(int i=0;i<=len-1;i++)
	{
		if(str[i]=='.')  pos1=i+1;
		if(str[i]=='e')	pos2=i+1;
	} 
	
	for(int i=0;i<pos2;i++)
	{
		if(str[i]>='0' && str[i]<='9')  c=c*10+(str[i]-48);
	}
	for(int i=pos2+1;i<len;i++)
	{
		if(str[pos2] == '+') d=10*d+(str[i]-48);
		if(str[pos2] == '-') d=-(10*d+(str[i]-48)); 
	}
	f=pos1-pos2+1;
	g=c*pow(10,f+d);
	cout<<fixed<<g;
	
}

int main()

{
	char str[100];
	gets(str);
	convert(str);
}
