#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		double H,h,D;
		cin>>H>>h>>D;
		double a1,a2,a3,maxn;
		a1 = sqrt((H-h)*D);
		a2 = (H-h)*D/H;
		if(a1 >= D) cout<<fixed<<setprecision(3)<<h<<endl;
		else if(a1<a2) cout<<fixed<<setprecision(3)<<h*D/H<<endl;
		else 
		{
			a3 = D+H-a1-(H-h)*D/a1;
			cout<<fixed<<setprecision(3)<<a3<<endl;
		}
	}
}
