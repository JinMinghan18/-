#include<bits/stdc++.h>
using namespace std;

 bool cmp(int x,int y)
 { return x>y;
 }
 
int main()
{
    int a[6];
    
	
	for(int i=0;i<6;i++)
	{
		cin>>a[i];
	
	}
		sort(a,a+6,cmp);
    for(int i=0;i<6;i++)
	{
		cout<<a[i]<<" ";
	if((i+1)%3==0)
		cout<<endl;
	}
	for(int i=0;i<=5;i++){
		int x=sqrt(a[i]);
		int flag=1;
		for(int j=2 ; j<=x ; j++){
			
			if ( a[i] % j ==0 || a[i]<=1) flag=0; break;				
			
		}
		if (flag == 1) cout<< a[i] <<" ";
	}
} 
 
 

