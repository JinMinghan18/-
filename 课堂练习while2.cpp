#include <iostream>
using namespace std;
int main()
{int m=0,i, b=0,c=0,d=0;
 
 	while (m<8){
 		i=getchar();
 		if(i<='Z' && i>='A' )  b+=1;
 			else if( i>='0' && i<='9') c+=1;
 				else d+=1;
 				m++; 
	 } 
	 cout<<"´óÐ´"<<b<<"Ð¡Ð´"<<d<<"Êý×Ö"<<c; 
 } 
