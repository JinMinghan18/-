#include <iostream>
using namespace std;
int main()
{ int s,i;
	cin>>s;
	i=s/10;
	switch(i) 
	{
	case 0 :
	case 1 :
	case 2 :
	case 3 :
	case 4 :
	case 5 : cout<<"E"<<endl;break;
	case 6 : cout<<"D"<<endl;break;
	case 7 : cout<<"C" <<endl;break;
	case 8 : cout<<"B"<<endl ;break;
	case 9 : cout<<"A" <<endl;break;
}
	return 0;
}
