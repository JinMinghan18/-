#include <iostream>
using namespace std;
int main()
{
	int N,score[1000],num ,b=0;
	cin>>N; 
	while ( N!=0)
	{		
		for(int i=0;i<N;i++)	cin>>score[i];
		cin>>num;
		b = 0;
		for(int i=0;i<N;i++)
		{
			if (score[i]==num) b++;
		}
		cout<<b<<endl;
		cin>>N;
	}
	return 0;
 } 
