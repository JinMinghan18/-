#include <iostream>
using namespace std;
int main()
{ int s;
cin>>s;
	if (s<60) cout<<"E"<<endl;
		else if (s<70 && s>=60) cout<<"D"<<endl;
			else if (s<80 && s>=70) cout<<"C"<<endl;
				else if (s<90 && s>=80) cout<<"B"<<endl;
					else cout<<"A"<<endl;
 } 
