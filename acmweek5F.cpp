#include <iostream>
using namespace std;
int main()
{
	int n,m,j = 0;

	while(cin>>m>>n){
	j=0;
	for(int i=1;i<=100;i++)
	{
	        j+=m;		
			if(j%n==0) break;	
	
	}
	cout<<j<<endl;}

}
