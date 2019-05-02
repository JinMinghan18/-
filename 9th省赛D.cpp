#include <iostream>
#include <cstring>
#include <stdio.h> 
using namespace std ;
int minn[30],a[30];
char s[15];
int main()
{
	int n,cas,i,j,len = 12;
	cin>>cas;
	while(cas -- )
	{
		scanf("%d",&n);
		scanf("%s",s);
		memset(minn,0,sizeof(minn));
		for(i = 0;i<len;i++)
			minn[s[i]-'A']++;
		for(i = 1;i<n;i++)
		{
			scanf("%s",s);
			memset(a,0,sizeof(a));
			for(j=0;j<len;j++)
			{
				a[s[j]-'A']++;
			}
			for(j=0;j<26;j++)
			{
				minn[j] = min(minn[j],a[j]);
			}
		}
		for(i = 0;i<26;i++)
		{
			while(minn[i]--) 
			{
				printf("%c",i+'A');
			} 
		}
		cout<<endl;	
	}
} 
