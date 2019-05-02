#include <iostream>
using namespace std;
void remove_dup(char * str)
{
	cout<<"去重后";
	while(* str!='\0')
	{
		if(*(str+1) != *str) cout<<*str;
		str++;
	}
}

int main()
{
	char a[1000]={};
	gets(a);
	cout<<"去重前"<<a<<endl;
	remove_dup(a);
	 return 0;
}
