#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    return b?gcd(b,a%b):a;
}
int main()
{
	int n, k,a[100010];
	cin>>n>>k;
	int gcd = k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		gcd = __gcd(gcd,a[i]%k);
	}
	int cnt = 0;
	cout<<k/gcd<<endl;
	while(cnt<k)
	{
		cout<<cnt<<" ";
		cnt+=gcd;
	}
	cout<<endl;
} 
