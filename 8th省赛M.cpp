#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		int n;
		cin>>n;
		double p[510];
		for(int i=0;i<n;i++)	cin>>p[i];
		double first ,second;
		nth_element(p,p+(n/2-1),p+n);
		first = p[n/2-1];
		nth_element(p,p+(n/2),p+n);
		
		second = p[n/2];
		if(n%2 != 0) cout<<fixed<<setprecision(3)<<second<<endl;
		else cout<< fixed<<setprecision(3)<<(first+second)/2<<endl;
	} 
}
