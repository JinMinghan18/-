
#include <iostream>
using namespace std;
bool is_sorted(int a,int b,int c)
{
	if((a<b &&b<c)||(a>b && b>c))  return true;
		else return false;
} 
int main()
{ int a,b,c;
	cin>>a>>b>>c;
	if(is_sorted( a, b, c)==1) cout<<"YES";
		else cout<<"NO";
		return 0;
}
