#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		int k;
		cin>>k;
		for(int i=0;;i++)
		{
			if(pow(2,i)*2-1>=k) 
			{
				cout<<i+1<<endl;
				break;
			}
		}
	}
	
} 
