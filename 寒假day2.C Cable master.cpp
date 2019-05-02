#include<stdio.h>
#include <cmath>
#include <iomanip>
#define maxn 1e-8
int n , k; 
double a[10010];
bool fun(double x,int n,int k)
{
	int summ = 0;
	for(int i=0;i<n;i++){
	summ+=(int)(a[i]/x);
	}
	return summ>=k;
}
int main()
{
	
	scanf("%d%d",&n,&k);
	
	for(int i=0;i<n;i++)
	{
		scanf("%lf",&a[i]);
	}
	double l = 0,r = 100005,mid=0;
	int i = 1000;
	while(i--)
	{
		mid = (r+l)/2;
		if(fun(mid,n,k))
			l = mid;
		else 
			r = mid;
	}
	printf("%0.2f\n",floor(r*100)/100);
}
 
