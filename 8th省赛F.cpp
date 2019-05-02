#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		int a,pos1,pos2;
		char b[22];
		char c[110][22];
		cin>>a>>b;
		for(int i =0;i<a;i++)		cin>>c[i];
		for(int j=0;j<a;j++)
			if(strcmp(c[j],b) == 0) pos1 = j;
		pos2 = (pos1+a/2)%a;
		cout<<c[pos2]<<endl;
	}
}
