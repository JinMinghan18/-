#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	cin>>n; 
    int a[n][n];
	int i,j,max,maxj;
	bool flag; 
	for(i=0;i<n;i++) 
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	} 
	for(i=0;i<n;i++)   
	{
		max=a[i][0];maxj=0;
		for(j=0;j<n;j++)   
		{
			if(max<=a[i][j])
			{
				max=a[i][j]; 
				maxj=j;    
			}
		} 
		
		flag=true;     
		for(int k=0;k<n;k++)
		{
			if(max>a[k][maxj])  
			{
				flag=false;    
				continue;
			}
		}
		if(flag)            
		{
			cout<<i<<" "<<maxj<<endl;  
			break;
		}
	} 
	if(!flag)  
	{
		cout<<"NONE"<<endl;
	}
	return 0;
}

