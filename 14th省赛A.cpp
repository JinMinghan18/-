#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		int n,K=0,T=0;
		cin>>n;
		while(n--)
		{
			int k;
			cin>>k;
			switch(k)
			{
				case 1 : K++;break;
				case 2 : T++;break;
				case 3 : K++;T++;break;
				case 4 : K--;T--;break; 	
			}
			
		}
		if(K>T) cout<<"Kobayashi"<<endl;
			if(K == T) cout<<"Draw"<<endl;
			if( K< T) cout<<"Tohru"<<endl;
	}
} 
