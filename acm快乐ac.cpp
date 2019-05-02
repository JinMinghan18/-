#include <iostream>
using namespace std;
int main()
{ int N,sum=0;
	while(cin>>N){
		int i=0,j;
		sum=0;
		while (i<N){
			cin>>j;
			sum+=j;
			i++; 
		}
		cout<<sum<<endl;
	} 
}
