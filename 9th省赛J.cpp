#include <iostream>
using namespace std;
int modInverse(int a, int m) {
    a %= m;
    for(int x = 1; x < m; x++) {
        if((a*x-1) % m == 0) return x;
    }
}
int main()
{
	bool flag;
	int T;
	cin>>T;
	while(T--)
	{
		
		int a,m;
		cin>>a>>m;
		if(m == 1)
		{
			cout<<1<<endl;
			continue;
		}
		flag = false;
		for(int i = 1;i <= m;i++)
		{
			if((a*i-1)%m == 0)
			{
				flag = true;
				cout<<i<<endl;
				break;
			}
		}
		if(!flag)cout<<"Not Exist"<<endl;
	}	
}
