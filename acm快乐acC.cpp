#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int S,i=1,min=0;
	cin>>S;
		for(i=sqrt(S);i>0;i--){
			if(S%i==0) break;}
			min = S / i + i;
			cout<<min*2; 
			
	}

	

