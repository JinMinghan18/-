#include<iostream>
#include <cmath>

using namespace std;
int main()
{
	int n,k,t = 0x3f3f3f3f,pos;
	cin>>n>>k;
	int c = sqrt(n*k);
	for(int i=k-1;i>0;i--)
	{
		if(n%i == 0){
			if(abs(i-c)<t) 
			{
				t = abs(i-c);
				pos = i;
			}
		}
	}
	int ans = n*k/pos+pos;
	cout<<ans<<endl;
	return 0;
	
} 
