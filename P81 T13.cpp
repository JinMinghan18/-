#include <iostream>
using namespace std;
int main()
{ long i,t,s;
	cout<<"请输入月利润："<<endl;
	cin>>i;
	s=i/100000; 
	if (s>10) s=10;	
	switch(s)
		{
			case 0:t=i*0.1; break;
			case 1:t=10000+(i-100000)*0.075; break;
			case 2:
			case 3:t=17500+(i-200000)*0.050; break;
			case 4:
			case 5:t=27500+(i-400000)*0.030; break;
			case 6:
			case 7:t=33500+(i-600000)*0.015; break;
			case 8:
			case 9:
			case 10:t=39500+(i-1000000)*0.01; break;
		}
		cout<<"奖金为："<<t<<endl;
		return 0; 
 }
  
