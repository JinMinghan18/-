#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		double d,t,f,s;
		cin>>d>>t;
		if(d<=3) 
		{
			f = 11+t*0.4;
			s = 11+t*0.625;
		}
		if(d>3&&d<=10)
		{
			f = 11+(d-3)*2.0+t*0.4;
			s = 11+(d-3)*2.5+t*0.625;
		}
		if(d>10)
		{
			f = 25+(d-10)*3+t*0.4;
			s = 28.5+(d-10)*3.75+t*0.625;
		}
		f = round(f);
		s = round(s);
		int ans = s-f;
		ans = abs(round(ans));
		cout<<ans<<endl;
	}
}
