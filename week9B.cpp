#include <iostream>
int main()



{int t ;
scanf("%d", &t);
while (t--){
	int n,i,j,k,aera,min=100000;
	scanf("%d", &n);
	for(int i=1;i<n+1;i++){
		for(int j=1;j<n+1;j++){
			if(n%(i*j)==0){
				k=(n/i)/j;
				aera=(i*j+i*k+j*k)*2;
				if(aera<min) min=aera;
			}
			else 
				continue;
		}
	}
	printf("%d\n",min);
	
} 

} 
