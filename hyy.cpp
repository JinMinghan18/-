#include<iostream>
using namespace std;
char zh(int a){
	int z,h;
	char m;
	h=a%16;
	if(h>=10 && h<16){
		m=char(h+55);
		
	}
	else m=char(h+48);
	return m;
	
} 


int main(){
	
	int i=0,h,m,n;
	char a[100];
	cin>>h;
	while(h>0){
		i++;
		a[i]=zh(h);
		h=h/16;
		
		
	}
	
	for(i;i>=1;i--){
		
		cout<<a[i];
	}
	
}
