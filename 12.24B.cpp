#include <iostream>
using namespace std;
void remove_dup(char * str)
{
	cout<<"ȥ�غ�";
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
	cout<<"ȥ��ǰ"<<a<<endl;
	remove_dup(a);
	 return 0;
}
