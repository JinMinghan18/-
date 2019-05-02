#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,K;
	cin>>N>>K;
	if(N == 0) cout<<"Austin"<<endl;
	else if(N % 2 == 0 && K == 1) cout<<"Austin"<<endl;
	else if(N % 2 == 1 && K == 1) cout<<"Adrien"<<endl;
	else cout<<"Adrien"<<endl;  
} 
