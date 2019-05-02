#include <iostream>
using namespace std;
int main ()
{ long long  n,i,k=0;
	long long    min=0,Ai[50000]={};
	cin>>n;
	for(i=0;i<n;i++) { cin>>Ai[i];
		k+=Ai[i];
		if(min>k) min=k;
	}
		cout<<-min;
			
}
