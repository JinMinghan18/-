#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,count = 0,pos,SB=0,FB=0;
		cin>>N;
		while(N--)
		{	count++;
			int p;
			cin>>p;
			if(p>FB) 
				SB = FB,FB = p,pos = count;
			else if(p<FB && p>SB) SB = p;
		}
		cout<<pos<<' '<<SB<<endl;
	}
} 
