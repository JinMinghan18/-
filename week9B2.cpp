#include <iostream>
using namespace std;
int main()



{int c ,n;
cin>>c;
while (c--){
	int i,j,k,S,min=100000;
	cin>>n;
	for(int i=1;i<n+1;i++){
		for(int j=1;j<n+1;j++){
			if(n%(i*j)==0){
				k=(n/i)/j;
				S=(i*j+i*k+j*k)*2;
				if(S<min) min=S; 
			}
			else continue;
		}
	}
	cout<<min<<endl;

} 
	return 0;
} 
