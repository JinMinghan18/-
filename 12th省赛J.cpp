#include <iostream>
#include <cstring>
#include<stdio.h>
using namespace std;

char s1[]= {"-=_+qwertyuiop[]QWERTYUIOP{}asdfghjkl;'ASDFGHJKL:\"zxcvbnm,./ZXCVBNM<>?"};
char s2[]= {"[]{}',.pyfgcrl/=\"<>PYFGCRL?+aoeuidhtns-AOEUIDHTNS_;qjkxbmwvz:QJKXBMWVZ"};
char c;
char exchange(char c)
{
	for(int i=0;s1[i];i++)
	{
		if(s1[i] == c)
			return s2[i];
	}
	return c;
}
int main()
{
	while(scanf("%c",&c)!=EOF) 
	{
		cout<<exchange(c);
	}
}
