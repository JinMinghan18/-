#include<iostream>
using namespace std;

void s(int k,char a,char b,char c)
{
	if (k == 1)
	{
		cout<<k<<':'<<a<<"->"<<c<<endl;
	}
	else
	{
		s(k-1,a,c,b);
	cout<<k<<':'<<a<<"->"<<c<<endl;
	s(k-1,b,a,c);
	}	
}
int main()
{
	int k;
	char a,b,c;
	cin>>k;
	cin>>a>>b>>c;
	s(k,a,b,c);	
	return 0;
}

