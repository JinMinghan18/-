#include <iostream>
using namespace std;	
int main()
{ char c;
  while ((c=getchar())!='\n')
    {if((c>='a'&&c<='w')||(c>='A'&&c<='W'))
       c+=4;
         else if((c>'w'&&c<'z')||(c>'W'&&c<'Z')) 
		 c-=26;
	   
	 cout<<c;  
	  } 
	cout<<endl;
	return 0;  
 } 
