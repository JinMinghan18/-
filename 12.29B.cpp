#include <iostream>
#include <cstring>
using namespace std;
void* reverse_sentence(char* str)
{
	int b[100]={},k=0;//´æ¿Õ¸ñÎ»ÖÃ 
	int len = strlen(str);
	for(int i=0;i<len;i++)
	{
		if(str[i] == ' ') 
		{
			b[k]=i; 
			k++;
		}
	}
	for (int j = b[k-1] + 1;j<=len - 1;j++)	cout<<str[j];
	cout<<' ';
	for(int i=k-1;i>0;i--)
	{
		for(int j=b[i - 1]+1;j<b[i];j++)	cout<<str[j];
		cout<<" ";
	} 
	for(int j =0 ;j<b[0];j++) cout<<str[j];
}
int main()
{
	char str[100];
	gets(str);
	reverse_sentence(str);
}
