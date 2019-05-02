#include<iostream>
using namespace std;
int main(){
	int max,min,num,f=0,a,b,c,t;
	cin>>num;
	while(num!=495||f==0)
	{ 
		a=num/100;b=num/10%10;c=num%10; //分解为a,b,c三个数 
		if(a<b) {t=a;a=b;b=t;} 	//三个if是把a,b,c从大到小排序 
		if(a<c) {t=a;a=c;c=t;}
		if(b<c) {t=b;b=c;c=t;}
		max=a*100+b*10+c; min=a+b*10+c*100;
		num=max-min;	
		f++;
		cout<<f<<": "<<max<<" - "<<min<<" = "<<num<<endl;
	}
	return 0;
} 

