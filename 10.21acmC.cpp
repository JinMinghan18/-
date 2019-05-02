#include <iostream>
#include <algorithm>
using namespace std;
long long a[300001],b[300001];
	bool cmp(int x,int y){
	return x>y;}

int main()
{ int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,cmp);
	for( int i=0;i<n;i++) cout<<a[i];
}
