#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while (n--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if(abs(a-b)>abs(a-c)) cout<<"B"<<endl;
		else if(abs(a-b)<abs(a-c)) cout<<"A"<<endl;
	}
}
