#include <iostream>
using namespace std;
int atoi(char *s)
{
	if(* s == '-') 
	{
		int sum=0;
		for(int i=1;*(s+i) != '\0';i++)
		{
			sum=10*sum+(*(s+i)-48);
		}
		return sum*-1; 
	}
	else if(* s =='+'  )
	{
		int sum=0;
		for(int i=1;*(s+i) != '\0';i++)
		{
			sum=10*sum+(*(s+i)-48);
		}
		return sum;
	}
	else 
	{
		int sum=0;
		for(int i=0;*(s+i) != '\0';i++)
		{
			sum=10*sum+(*(s+i)-48);
		}
		return sum;
	}
}
bool larger(char *s1,char *s2)
{
	int a1=atoi(s1),a2=atoi(s2);
	if(a1>a2) return true;
	return false;
}
int main()
{
	char b[100]={},c[100]={};
	gets(b);
	gets(c);
	char* p2 = b;char * p3 = c;
	if( larger(p2,p3))
	{
		cout<<"yes"<<endl;
	}
	else cout<<"NO"<<endl;
}
