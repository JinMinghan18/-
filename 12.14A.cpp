#include <iostream>
using namespace std;
int main()
{
	int K,a[26]={},total=0,b=0;
	cin>>K;
	for(int i=0;i<K;i++)
	{
		cin>>a[i];
	}
	b=a[0]; 
	for(int i=0;i<K;i++)
	{
		if(b>=a[i])
		{
			total++;
			b=a[i];
		}
	}
	cout<<total;
} 
