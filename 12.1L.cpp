#include <iostream>
#include <algorithm>
using namespace std;
long long gcd(long long a,long long b)
{
		return b==0?a:gcd(b,a%b);
}
int main()
{
	int T,b,a,q[1010],time=0;
	cin>>T;
	while(T--)
	{
		cin>>b;
		time=0; 
		for(int a=1;a<=1000;a++)
		{
			int minX=gcd(a,b);
			int maxN=a*b/minX;
			q[a]=maxN/a;
		}
		sort(q+1,q+1001);
		for(int i=1;i<1001;i++)
		{
			if(q[i]==q[i+1]) continue;
				else	time++; 	
		} 
		cout<<time<<endl;
		
	}
}
