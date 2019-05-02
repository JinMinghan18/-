#include <iostream>
#include<algorithm>
#include<cstdio>
#include <cmath>
using namespace std;
int main()
{
	int T,N;
	long long Kb;
	char a[50];
	cin>>T;
	while (T--)
	{
		cin>>N;Kb=0;
			getchar();
		while(N--){
			gets(a);
			if(a[0]=='b'||a[0]=='c') Kb++;
			if(a[0]=='i'||a[0]=='f') Kb+=4;
			if(a[0]=='l'||a[0]=='d') Kb+=8;
		}
		Kb=ceil(Kb/1024.0);
		cout<<Kb<<endl;
	 } 
	 return 0;
}
