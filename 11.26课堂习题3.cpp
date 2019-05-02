#include <iostream>
using namespace std;
int main()
{
	int a,c=0,b[100]={},len=0;
	cin>>a;
	do
		{
			int c=a%16;
			b[len]=c;
			len++;
			a/=16;		
	 }while(a>0);
	 for(int i=len-1;i>=0;i--){ 
	 	if(b[i]==10) cout<<'A';
	 		else if(b[i]==11) cout<<'B';
		 		else if(b[i]==12) cout<<'C';
	 				else if(b[i]==13) cout<<'D';
	 					else if(b[i]==14) cout<<'E';
	 						else if(b[i]==15) cout<<'F';
	 							else cout<<b[i];
	 }
	}
	

