#include <cstdio>
typedef long long ll;
const ll m = 1e9+7;
ll qmi(int a,int b,int c)
{
	ll res = 1,t = a;
	while(b){
		if(b&1) res = res * t % c;
		t = t * t % c;
		b>>=1;
	}
	return res;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		ll n;
		scanf("%lld",&n);
		ll k;
		ll ans = n%m;
		for(int i = n+1;i<=n+3;i++){
			ans = ans * i % m;
		}
		ans = ans *qmi(24,m-2,m)%m;
		printf("%lld\n",ans);
	}
	return 0;
}
