#include <iostream>
using namespace std;
int main()
{ int n ,k ,a[30]={};
	cin >> n >> k;
	int len=0,i=2;
		while(n>1 && k>0){
			while (n%i == 0 && k>=1){
				n/=i;
				k--;
				a[len]=i;
				len++;
			}
		 i++; 
		}
	if(n==1 && k>0) cout<<"-1";
		
		else{
			
			for(i=1;i<=len-1
			;i++){ 
			cout<<a[i]<<' ';
			}
			cout<<n*a[0];
				
		}	
}
