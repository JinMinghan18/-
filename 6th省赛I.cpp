#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		bool flag1 = true,flag2 = true;
		int k,a[200]={},b[200]={};
		cin>>k;
		for(int i=1;i<=k;i++)
			cin>>a[i];
		for(int i=1;i<=k;i++)
			cin>>b[i];	
		for(int i=1;i<=k;i++)
		{
			if(a[i] != b[i])	flag1 = false;
			if(a[i] != b[k+1-i])	flag2 = false;
		}					

		if(flag1 && flag2) cout<<"both"<<endl;
		else if(flag2) cout<<"stack"<<endl;
		else if(flag1) cout<<"queue"<<endl;
		else cout<<"neither"<<endl;
	} 
}
