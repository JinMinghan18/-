#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		int a;
		cin>>a;
		int b = (a/10)%10;
		if(a%10 == 1 && b != 1) cout<<a<<"st"<<endl;
			else if(a%10 == 2 && b != 1 ) cout<<a<<"nd"<<endl;
				else if(a%10 == 3 && b != 1) cout<<a<<"rd"<<endl;
					else cout<<a<<"th"<<endl;
	}
}
