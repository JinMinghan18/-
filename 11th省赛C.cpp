#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,M,a[50000]={},cnt=0,sum=0;
		cin>>N>>M;
		for(int i=0;i<N;i++)
		{
			cin>>a[i];
			cnt = max(cnt,a[i]);
			sum+=a[i];
		}
		int ret = sum/M;
		if(sum%M) ret++;
		cout<<max(ret,cnt)<<endl;
	}
	return 0;
}
