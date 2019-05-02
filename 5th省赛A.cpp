#include<bits/stdc++.h>
#define mod 1000000000+7
#define mt(a) memset(a,0,sizeof a) 
typedef long long ll;
using namespace std;
int ans[2000] ={};
int check(int a)
{
	if(a%7 == 0) return 1;
	while(a)
	{
		if(a%10 == 7) return 1;
		a/=10; 
	}
	return 0;
}
int main()
{
	int cot = 0,pos=mod;
	mt(ans);
	for(int i=1;i<10000;i++)
	{
		if(check(i))
		{
			cot++;
			if(cot == 1) pos=i;
			if(!ans[cot])
			ans[cot] = pos;
		}
		else cot = 0;
	}
	int T;
	cin>>T;
	while(T--)
	{
		int p;
		cin>>p;
		cout<<ans[p];
	}
} 
