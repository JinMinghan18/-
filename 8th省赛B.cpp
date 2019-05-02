#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		double a,b,c,d,e,f;
		cin>>a>>b>>c>>d>>e>>f;
		if(a == c && d*d+e*e-4*f>0) cout<<"circle"<<endl;
			else if(a*c > 0) cout<<"ellipse"<<endl;
				else if(a*c == 0) cout<<"parabola"<<endl;
					else cout<<"hyperbola"<<endl;
	}
	 
}
