#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		int x,y,z;
		char op1,op2;
		cin>>x>>op1>>y>>op2>>z;
		
		if(op1 == '+')
		{
			if(op2 == '+') cout<<x+y+z<<endl;
			else if(op2 == '-') cout<<x+y-z<<endl;
			else if(op2 == '*') cout<<x+(y*z)<<endl;
			else if(op2 == '%') cout<<x+(y%z)<<endl;
			else if(op2 == '/') cout<<x+(y/z)<<endl;
		}
		else if(op1 == '-')
		{
			if(op2 == '+') cout<<x-y+z<<endl;
			else if(op2 == '-') cout<<x-y-z<<endl;
			else if(op2 == '*') cout<<x-(y*z)<<endl;
			else if(op2 == '%') cout<<x-(y%z)<<endl;
			else if(op2 == '/') cout<<x-(y/z)<<endl;
		}
		else if(op1 == '*')
		{
			if(op2 == '+') cout<<x*y+z<<endl;
			else if(op2 == '-') cout<<x*y-z<<endl;
			else if(op2 == '*') cout<<x*y*z<<endl;
			else if(op2 == '%') cout<<x*y%z<<endl;
			else if(op2 == '/') cout<<x*y/z<<endl;
		}
		else if(op1 == '/')
		{
			if(op2 == '+') cout<<x/y+z<<endl;
			else if(op2 == '-') cout<<x/y-z<<endl;
			else if(op2 == '*') cout<<x/y*z<<endl;
			else if(op2 == '%') cout<<x/y%z<<endl;
			else if(op2 == '/') cout<<x/y/z<<endl;
		}
		else if(op1 == '%')
		{
			if(op2 == '+') cout<<x%y+z<<endl;
			else if(op2 == '-') cout<<x%y-z<<endl;
			else if(op2 == '*') cout<<x%y*z<<endl;
			else if(op2 == '%') cout<<x%y%z<<endl;
			else if(op2 == '/') cout<<x%y/z<<endl;
		}
	}
} 
