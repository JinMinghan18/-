#include <bits/stdc++.h>

using namespace std;
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		string a;
		cin>>a;
		int len = a.length();
		for(int i=0;i<len;i++)
		{
			if(a[i]-'0'< 0 || a[i]-'0'>9) cout<<a[i];
		}
		cout<<endl;
	}
}
